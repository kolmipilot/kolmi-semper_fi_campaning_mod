/*
 * Author: D.Anderson
 * Moidfied by: kolmipilot
 * Executed locally on client when player JIPs (Joins In Progress).
 * Restores player position, direction, and loadout if they reconnected.
 * If player was dead on disconnect, force respawns them.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Public: No
 */
params ["_player"];

private _uid = getPlayerUID _player;
private _playerVariable = format ["dAn_Respawn_%1", _uid];
private _msg = "";

if (!(missionNamespace isNil _playerVariable)) then {
    private _playerData = missionNamespace getVariable _playerVariable;
    if (_playerData select 5) then {
        // player was alive on disconnect
        _player setPos (_playerData select 3);
        _player setDir (_playerData select 4);
        [_player, (_playerData select 2)] call CBA_fnc_setLoadout;

        _msg = format ["[RESPAWN] (Client) UID: %1, Reconnected... %2", _uid, (_playerData select 0)];
    } else {
        _player setPos [0,0,0];
        [{
            forceRespawn (_this select 0);
            deleteVehicle (_this select 0);
        }, [_player], 5] call CBA_fnc_waitAndExecute;
    };

    _msg = format ["[RESPAWN] (Client) UID: %1, Reconnected... %2", _uid, (_playerData select 0)];
} else {
    _msg = format ["[RESPAWN] (Client) UID: %1, New Player detected...", _uid];
    //handle new player
};
// _msg remoteExec ["systemChat", 0];
_msg remoteExec ["diag_log", 2];
