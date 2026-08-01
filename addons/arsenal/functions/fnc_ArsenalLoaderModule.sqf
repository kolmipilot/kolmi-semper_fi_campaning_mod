#include "..\script_component.hpp"
/*
 * Author: kolmipilot
 * Adds interaction to object that will ask as arsenal.
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


params [["_logic", objNull, [objNull]], ["_units", [], [[]]], ["_activated", true, [true]]];

if (!isServer) exitWith {};

[{
    params ["_units"];

    private _arsenal = missionNamespace getVariable [QGVAR(arsenal), []];


{
    private _object = _x;
    if (!isNull _object) then {
        {
            _x params ["_title", "_loadout"];

            // Arguments are embedded in the action so every client/JIP player
            // gets the data even if missionNamespace isn't synchronized.
            private _action = [
                _title,
                {
                    params ["_target", "_caller", "_actionId", "_arguments"];
                    _arguments params ["_title", "_loadout", "_enforceRoles"];

                    if (_enforceRoles) then {
                        // Caller may only take a loadout whose title matches their own role
                        private _callerRole = roleDescription _caller;
                        private _allowed = (_title == _callerRole);

                        if (_allowed) then {
                            // checking enabled and matches - load loadout
                            [_caller, _loadout] call CBA_fnc_setLoadout;

                            private _text = parseText format ["Applying Loadout: <br /><t color='#ff0000'>%1</t>", _title];
                            [_text] remoteExec ["hintSilent", _caller];
                        } else {
                            private _text = [
                                "Selected loadout not assigned to your role!",
                                format ["Your role: <t color='#ff0000'>%1</t>", _callerRole],
                                format ["Selected loadout: <t color='#ff0000'>%1</t>", _title]
                            ];

                            _text = _text joinString "<br />";
                            _text = parseText _text;
                            [_text] remoteExec ["hintSilent", _caller];
                        };
                    } else {
                        // checking disabled - always load loadout
                        [_caller, _loadout] call CBA_fnc_setLoadout;

                        private _text = parseText format ["Applying Loadout: <br /><t color='#ff0000'>%1</t>", _title];
                        [_text] remoteExec ["hintSilent", _caller];
                    };
                },
                [_title, _loadout, true],
                1.5,
                true,
                true,
                "",
                "true",
                15,
                false,
                "",
                ""
            ];

            // Create/add action to the object on every client (including JIP)
            [_object, _action] remoteExec ["addAction", 0, true];
        } forEach _arsenal;
    };
} forEach (_units);

}, [_units], 5] call CBA_fnc_waitAndExecute;


