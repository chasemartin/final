//*Class Player*
#include "player.h"
#include <iostream>
#include <thrust/host_vector.h>

Player::Player()	//initialize class variables
{
	int score_low; //when aces are considered as 1
	int score_hight; //when aces are considered as 11
	if(num_aces==0)
	{
		return non_ace_total<15 ? true:false;
	};
	else
        {
                score_low=non_ace_total + num_aces;
                score_high=non_ace_total + num_aces+10;
                if(score_high<16)                       //higher score is 15 or less (hit on soft 15 or lower)
                {
                        return true;
                };
                else if (score_high>21 &&score_low <15) //lower score is below 15 and all aces considered 1
                {
                        return true;
                };
                else                                    //higher score is more than 15 or lower score is more than 14
                {
                        return false;
                };
        };
};

double Player::getWinpercentage()
{
	return (double)gamesWon/gamesPlayer;	//returns win percentage
};
int Player::numPlayed()
{
	return gamesPlayed;
};
int Player::numWon()
{
	return gamesWon;
};
int Player::numTied()
{
	return gamesTied;
};

void Player::won()
{
	gamesWon++;
	gamesPlayed++;
};
void Player::lost()
{
	gamesPlayed++;
};
void Player::tie()
{
	gamesTied++;
	gamesPlayed++;
};
