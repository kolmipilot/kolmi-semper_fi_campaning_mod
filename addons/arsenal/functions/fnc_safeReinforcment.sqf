#include "..\script_component.hpp"
/*
 *	Author: D.Anderson
 *	Yes
 *	
 *	Arguments:
 *	None
 *	
 *	Return Value:
 *	None
 *	
 *	Example:
 *	[player] call fn_safeReinforcement
 *	
 * 	Public: No
 */

params["_box"];
[
	_box,												// Object the action is attached to
	"Teleport - CCP",								    // Title of the action
	"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",	// Idle icon shown on screen
	"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",	// Progress icon shown on screen
	"_this distance _target < 7.5",						// Condition for the action to be shown
	"_caller distance _target < 7.5",						// Condition for the action to progress
	{},													// Code executed when action starts
	{},													// Code executed on every progress tick
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
        private _box = _arguments select 0;

        private _tpPos = getMarkerPos "orp_opium";
        private _tpDir = markerDir "orp_opium";

        if (!isNil "plt_med") then {
            private _isUnconscious = (lifeState plt_med == "INCAPACITATED") || ( plt_med getVariable["ACE_isUnconscious", false]);
            private _distance = (_caller distance plt_med) > 1000; // assume ao

            if (!_isUnconscious && (alive plt_med) && _distance) then {
                _tpPos = getPos plt_med;
                _tpDir = getDir plt_med;
            };
        };

        if (!isNil "plt_psg") then {
            private _isUnconscious = (lifeState plt_psg == "INCAPACITATED") || (plt_psg getVariable["ACE_isUnconscious", false]);
            private _distance = (_caller distance plt_psg) > 1000;

            if (!_isUnconscious && (alive plt_psg) && _distance) then {
                _tpPos = getPos plt_psg;
                _tpDir = getDir plt_psg;
            };
        }; 

        if (!isNil "plt_cmd") then {
            private _isUnconscious = (lifeState plt_cmd == "INCAPACITATED") || ( plt_cmd getVariable["ACE_isUnconscious", false]);
            private _distance = (_caller distance plt_cmd) > 1000;

            if (!_isUnconscious && (alive plt_cmd) && _distance) then {
                _tpPos = getPos plt_cmd;
                _tpDir = getDir plt_cmd;
            };
        };


        [["", "BLACK OUT", 1]] remoteExec ["cutText", _caller];
        [{
            params ["_caller", "_tpPos", "_tpDir"];

            [["", "BLACK IN", 1]] remoteExec ["cutText", _caller];
            private _safePos = _tpPos findEmptyPosition [1, 5, "B_Soldier_F"];

            _caller setPosATL _safePos;
            _caller setDir _tpDir;
            
        }, [_caller, _tpPos, _tpDir], 1.1] call CBA_fnc_waitAndExecute;
        
	},													// Code executed on completion
	{
		hint "PRZERWANE!";
		sleep 2;
		hint "";
	},													// Code executed on interrupted
	[_box],												// Arguments passed to the scripts as _this select 3
	1,													// Action duration [s]
	0,													// Priority
	false,												// Remove on completion
	false												// Show in unconscious state 
] remoteExec ["BIS_fnc_holdActionAdd", 0, _box];		// MP compatible implementation
