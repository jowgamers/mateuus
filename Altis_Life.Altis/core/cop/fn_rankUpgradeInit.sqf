#include "..\..\script_macros.hpp"
/*
	Author: DeltaSierra

	Description:
	This script is ran after you've clicked "Rank ++" from the player menu

	Notes:
	For the purpose of this tutorial, the dialog ID will be 9000
*/
disableSerialization;

//Button should not be visible to players under level 7, but this is Arma...
if (FETCH_CONST(life_coplevel) < 7) exitWith {closeDialog 0; hint "You don't have access to this!";};

//Put the dialog control into a variable
private _pList = CONTROL(9000, 9001);

//Clear the list first
lbClear _pList;

//May be a stupid way to do it, but we'll add EVERY player for now just incase the person you want to promote isn't able to play as an officer yet.. I'm open to suggestions!
{
    private _faction = switch (side _x) do {case west: {"Cop"}; case civilian: {"Civ"}; case independent: {"Medic"}; default {"Unknown"};};
    _pList lbAdd format ["%1 - %2", _x getVariable ["realname",name _x],_faction];
    _pList lbSetdata [(lbSize _pList)-1,str(_x)];
} forEach playableUnits;
