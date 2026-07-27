#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_submarineBubbles

Description:
    Bubble particle effects around the submarine.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
	params ["_object",["_offset",[0,0,0]],["_spread",0.3],["_dropInterVal",0.001],["_size",0.5],["_lifeTime",3]];

		private _position = position _object;
		

		private _source = "#particlesource" createVehicleLocal _position;
		_source setParticleClass "BubblesSmall";

		_source setParticleRandom [ 
			_lifeTime,
			[_spread,_spread,_spread],
			[1,1,1],
			0,
			(0.005 * _size),
			[0,0,0,1],
			1,
			0,
			0
		];


		_source setDropInterval _dropInterval; 
		_source attachTo [_object,_offset];
		_source
