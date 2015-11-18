//*Class Player*
#include "player.h"
#include <string>
#include <iostream>

Player::Player()	//initialize class variables
{
	gamesPlayed=0;
	gamesWon=0;
	gamesTied=0;
}
double Player::getWinpercentage()
{
	return (double)gamesWon/gamesPlayer;	//returns win percentage
}
int Player::numPlayed()
{
	return gamesPlayed;
}
int Player::numWon()
{
	return gamesWon;
}
int Player::numTied()
{
	return gamesTied;
}

