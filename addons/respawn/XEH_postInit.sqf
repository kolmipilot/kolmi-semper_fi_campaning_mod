#include "script_component.hpp"

if (isServer) then {
    [] call FUNC(initRespawnServer);
};

if (hasInterface) then {
    [[west], [east, resistance, civilian]] call ace_spectator_fnc_updateSides;
    [[1, 2], [0]] call ace_spectator_fnc_updateCameraModes;
    [[-2, -1], [0, 1, 2, 3, 4, 5, 6, 7]] call ace_spectator_fnc_updateVisionModes;

    // Handle JIP - wait for player object to be ready, then check if JIP
    [{
        if (!isNull player) then {
            if (didJIP) then {
                [player] call FUNC(handleOnPlayerConnected);
            };
            [_this select 1] call CBA_fnc_removePerFrameHandler;
        };
    }, 0, []] call CBA_fnc_addPerFrameHandler;
};
