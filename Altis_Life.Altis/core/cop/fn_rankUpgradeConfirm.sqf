/*
	Author: DeltaSierra

	Description:
	Once you've selected a player to promote, this script sends the UID and promotion rank to the server/DB to update.

	Notes:
	Dialog ID for the player list is 9001
*/
disableSerialization;
private _promotionRank = param [0,0,[0]];
private _playerSelected = call compile format["%1",(lbData[9001,(lbCurSel 9001)])];
if ((lbCurSel 9001) isEqualTo -1) exitWith {hint "You haven't chose an officer to promote";};

[getPlayerUID _playerSelected, _promotionRank] remoteExecCall ["TON_fnc_rankUpgradeDB",2];

//Send a message to the player to let them know they have been promoted.
[name player, _promotionRank] remoteExecCall ["life_fnc_rankAnnouncement", _playerSelected];
