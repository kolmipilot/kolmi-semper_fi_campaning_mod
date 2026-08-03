#include "..\script_component.hpp"
/*
 * Author: kolmipilot
 * Changes players respawn tickets on server. Can be used to add or remove tickets from players.
 *
 * Arguments:
 * player - string
 * tickets - integer (can be negative to remove tickets)
 *
 * Return Value:
 * Nothing
 *
 * [player, tickets] call kolmiSFCM_respawn_fnc_addTickets;
 * Public: Yes/No ?
 */


params ["_player", "_tickets"];

    private _targetNick = _player;
    private _players = allPlayers;
    private _index = _players findIf {(name _x) == _targetNick};
    private _unit = _players param [_index, objNull];


    private _uid = getPlayerUID _unit;
    private _playerVariable = format ["dAn_Respawn_%1", _uid];
    _playerData = missionNamespace getVariable _playerVariable;

    private _respawnTickets = (_playerData select 1) + _tickets;
    _playerData set [1, _respawnTickets];
    private _msg = format ["[RESPAWN] (Client) INFO: UID: %1, %2 tickets set to %3", _uid, (name _unit), _respawnTickets];