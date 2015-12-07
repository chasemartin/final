
//*Class Player*
//=======================
//include guard

#ifndef __PLAYER_H_INCLUDED__
#define __PLAYER_H_INCLUDED__

//========================
//included dependencies

#include <vector>
#include <thrust/host_vector.h>
#include <string>
#include "deck.h"
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
        bool hit_or_stay(); //returns true if player hits else false
        double getWinpercentage(); //returns percentage of games won
        void won();     //called when player wins
        void lost();    //called when player loses
        void tie();      //called when round tied
        Player();       //constructor
        int numPlayed(); //returns number of games played
        int numWon();   //returns number of games won
        int numTied();  //returns number of games tied
};

#endif //__PLAYER_H_INCLUDED__
