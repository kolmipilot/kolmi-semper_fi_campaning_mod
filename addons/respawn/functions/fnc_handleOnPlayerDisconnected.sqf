/*
 * Author: D.Anderson
 * Moidfied by: kolmipilot
 * Executed on server when player disconnects from the game.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Nothing
 *
 * Public: Yes/No ?
 */

private _mehIdHandleDisconnect = addMissionEventHandler ["HandleDisconnect", {
    /* 
     * Save location and loadout and alive state
     */
	params ["_unit", "_id", "_uid", "_name"];
    private _eventTime = serverTime - (missionNamespace getVariable "dAn_Respawn_MissionStartTime");
    private _playerVariable = format ["dAn_Respawn_%1", _uid];

    if (!(missionNamespace isNil _playerVariable)) then {
        private _playerData = missionNamespace getVariable _playerVariable;

        private _playerLoadout = [_unit] call CBA_fnc_getLoadout;

        private _playerData = [
                (_playerData select 0),
                (_playerData select 1),
                ([_unit] call CBA_fnc_getLoadout),
                (getPos _unit),
                (getDir _unit),
                (alive _unit)
            ];

        missionNamespace setVariable [_playerVariable, _playerData, true];
        deleteVehicle _unit;
    };

    private _msg = format["[RESPAWN] (Disconnect Handle) INFO: UID: %1, Player %2 disconnected, T+%3", _uid, _name, _eventTime];
    if(missionNamespace getVariable ["dAn_debug", false]) then {
        _msg remoteExec ["systemChat", 0];
    };

    diag_log _msg;
	false;
}];
