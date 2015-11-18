//*Class Player*
//=======================
//include guard

#ifndef __PLAYER_H_INCLUDED__
#define __PLAYER_H_INCLUDED__

//========================
//included dependencies

#include <vector>
#include <string>
#include "card.h"
#include "participant.h"

//=======================
//the actual class

class Player: public Participant //Player inherits from participant
{
	int gamesPlayed;
	int gamesWon;
	int gamesTied;

	public:
	double getWinpercentage(); //returns percent of games won

	Player();
	int numPlayed(); //returns number of games played
	int numWon();   //returns number of games won
	int numTied();  //returns number of games tied
};

#endif //__PLAYER_H_INCLUDED__
