/*
 * Author: D.Anderson
 * Moidfied by: kolmipilot
 * Executed locally on each player when respawned
 * Initiates Custom Wave Respawn System.
 *
 * Arguments:
 * 0: player <OBJECT>
 * 1: didJIP <BOOL>
 *
 * Return Value:
 * Nothing
 *
 * Public: No?
 */

    /* 
     * Restore Loadout, Send state upd 
     */
	params ["_unit", "_corpse"];
    private _uid = getPlayerUID _unit;
    private _name = name _unit;
    private _playerVariable = format ["dAn_Respawn_%1", _uid];
    _playerData = missionNamespace getVariable _playerVariable;

    _respawnTickets = (_playerData select 1) - 1;
    
    _playerData set [1, _respawnTickets];
    
    _msg = format["[DEBUG] Player %1 respawned, UID: %2, Tickets Updated to: %3", _name, _uid, _respawnTickets];

    [{
        params ["_unit"];
        private _uid = getPlayerUID _unit;
        private _playerVariable = format ["dAn_Respawn_%1", _uid];
        _playerData = missionNamespace getVariable _playerVariable;

        _playerLoadout = _playerData select 2;
        [_unit, _playerLoadout] call CBA_fnc_setLoadout;

    }, _unit] call CBA_fnc_execNextFrame;

    // _msg remoteExec ["systemChat", 0];
    _msg remoteExec ["diag_log", 2];
