#include "..\script_component.hpp"

//Spawns a drone with a grenade attached
_drone 		= param[0];
_grenade 	= param[1,"G_40mm_Drone"];
_name 		= param[2, "grenade"];

if(is3DEN) exitWith {};

//waitUntil {time > 0 and !is3DEN};
// Look up the model of the actual grenade ammo for the visual attachment
_grenadeModel = getText(configFile >> "CfgMagazines" >> _grenade >> "model");
if(_grenadeModel == "") then {
	_grenadeModel = "\A3\Weapons_f\ammo\Handgrenade";
};
// Visual grenade on drone - uses createSimpleObject with the actual grenade model
_gren = createSimpleObject [_grenadeModel, [0,0,0]];
_gren attachTo [_drone, [0,0,-0.12]]; 
_drone setVariable ["grenadeObj", _gren];

_ids = [];
{
	_n = _x addAction [("<t color='#FF0000'>" + "Drop " + _name + "</t>"), {
		//HandGrenade
		params ["_target", "_caller", "_actionId", "_arguments"];
		_vehicle = vehicle _caller;

		//detach and delete the visual grenade from the drone
		_visualGren = _vehicle getVariable ["grenadeObj", objNull];
		if(!isNull _visualGren) then {
			detach _visualGren;
			deleteVehicle _visualGren;
		};
		_vehicle setVariable ["grenadeObj", objNull];

		_droneVelocity = velocity _vehicle;
		_grenadeType = (_this select 3) select 0;

		_pos = _target modelToWorld [0,0,-0.2];
		
		// Create the REAL explosive ammo at drop position (only now does the fuse start)
		_gren = _grenadeType createVehicle _pos;
		_gren setVectorDirAndUp [[0,0,-1],[0.1,0.1,1]]; 
		_gren setVelocity [_droneVelocity select 0, _droneVelocity select 1, (_droneVelocity select 2) - 1];
		_vehicle setVariable ["grenadeType", ""];
		
		{
			_x removeAction _actionId;
		} forEach crew _vehicle;
		
		//Given how things are setup the id can only be accessed later
		//_removeId = (_vehicle getVariable ["removeId",99]);

		//Bit of a complex code, we check every grenade type in the saved array and see if matches the one we dropped, then we remove the IDs associated with that grenade
		_found = false;
		_removeId = 99;
		_index = 0;
		_idArr = _vehicle getVariable ["_idArr", []];
		{
			_IDgrenade = (_x select 1);
			if(_IDgrenade == _grenadeType and !_found) then {
				_found = true; //TODO find function
				_removeId = (_x select 0);
				_idArr deleteAt _index;
			};
			_index = _index + 1;
		}forEach _idArr;

		
		_vehicle setVariable ["_idArr", _idArr];
		_vehicle removeAction _removeId;

		//Re initialize drone
		[_vehicle] call FUNC(makeGrenadeDrone);
	}, [_grenade], 10];

	_ids pushBack _n;
}forEach crew _drone;

_ids;
