#include "..\script_component.hpp"
/*
 * Author: D.Anderson
 * Moidfied by: kolmipilot
 * Executed only on server when mission is started. 
 * Initiates Custom Wave Respawn System.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Nothing
 *
 * Public: Yes/No ?
 */

// init timestamp
[
	{time > 0}, 
	{
        private _startTime = serverTime;
        missionNamespace setVariable ["dAn_Respawn_MissionStartTime", _startTime, true];
        private _msg = format ["[RESPAWN] (Server) INFO: Time delta for respawn: %1", _startTime];
        if(missionNamespace getVariable ["dAn_debug", false]) then {
            _msg remoteExec ["systemChat", 0];
        };

        diag_log _msg;
        private _respawnInterval = missionNamespace getVariable [QGVAR(Times), 60];
        private _respawnTickets = missionNamespace getVariable [QGVAR(Tickets), 2];

        private _allPlayers = allPlayers - entities "HeadlessClient_F";

        {
            private _playerUid = getPlayerUID _x;
            private _playerName = name _x;
            private _playerLoadout = [_x] call CBA_fnc_getLoadout;

            private _playerVariable = format ["dAn_Respawn_%1", _playerUid];

            private _playerData = [
                _playerName,        // 0
                _respawnTickets,    // 1
                _playerLoadout,     // 2
                (getPos _x),        // 3
                (getDir _x),        // 4
                (alive _x)          // 5
            ];

            missionNamespace setVariable [_playerVariable, _playerData, true];

            private _msg = format["[RESPAWN] (Server) INFO: UID: %2, %1 added to respawn system", _playerName, _playerUid];
            
            if(missionNamespace getVariable ["dAn_debug", false]) then {
                _msg remoteExec ["systemChat", 0];
            };
            diag_log _msg;
        } forEach _allPlayers;
        
    },
[]] call CBA_fnc_waitUntilAndExecute;


[] call FUNC(handleOnPlayerDisconnected);


private _mehIdPlayerConnected = addMissionEventHandler ["PlayerConnected", {
    /* 
     * Handle JIP players - set up their respawn data on server
     */
	params ["_id", "_uid", "_name", "_jip", "_owner", "_idStr"];
    private _eventTime = serverTime - (missionNamespace getVariable "dAn_Respawn_MissionStartTime");
    
    if(_jip) then {
        private _msg = format["[RESPAWN] (Server) INFO UID: %1, Player %2 connected (JIP), T+%3", _uid, _name, _eventTime];
        if(missionNamespace getVariable ["dAn_debug", false]) then {
            _msg remoteExec ["systemChat", 0];
        };
        diag_log _msg;

        // Set up player data for JIP player if not already present
        private _playerVariable = format ["dAn_Respawn_%1", _uid];
        if (missionNamespace isNil _playerVariable) then {
            private _respawnTickets = missionNamespace getVariable [QGVAR(Tickets), 2];
            private _playerData = [
                _name,              // 0 - player name
                _respawnTickets,    // 1 - respawn tickets
                [],                 // 2 - loadout (will be set on client)
                [0,0,0],            // 3 - position
                0,                  // 4 - direction
                true                // 5 - alive state (assume alive for new JIP)
            ];
            missionNamespace setVariable [_playerVariable, _playerData, true];
            private _msg2 = format["[RESPAWN] (Server) INFO: UID: %1, New JIP player data created", _uid];
            diag_log _msg2;
        };
    };
}];
