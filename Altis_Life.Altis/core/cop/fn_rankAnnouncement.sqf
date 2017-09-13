/*
	Author: DeltaSierra

	Description:
	Sends a simple message to the player to let them know their rank has changed.

	Notes:
	You could easily add your own notification system to this, for the sake of me being lazy we'll just do a simple hint.
*/
private _promotionOfficer = param [0, "", ["Unknown"]];
private _rank = param [1, 0, [0]];

hint format ["Your rank has been changed by %1, you are now Rank %2 in the Police Force.\n\nYou must back out to the lobby for this change to take place.", _promotionOfficer, _rank];
