//*Class Participant*
#include "participant.h"
#include <iostream>
#include "card.h"

void Participant::printHand()	//print cards at hand
{
	for(int i=0;i<hand.size();i++)
	{
		hand[i].print();
	}
	std::cout<<"\n";
}
void Participant::add(Card c)	//add card to hand
{
	hand.push_back(c);
	if(c.getValue()==1)	//maintain correct non ace total and ace count
	{
		num_aces++;
	}
	else if(c.getValue()>==10)
	{
		non_ace_total+=10;
	}
	else
	{
		non_ace_total+=c.getValue();
	}
}
void Participant::clearHand()
{
	hand.clear();		//clear cards at hand
	num_aces=0;
	non_ace_total=0;
}
int Participant::bestscore()
{
	int score_high;
	int score_low;
	if (num_aces==0)
	{
		return non_ace_total;	//if no aces in hand
	}
	else
	{
		score_low = non_ace_total + num_aces;	//lower possible score considered
		score_high = non_ace_total + 10 + num_aces;	//higher possible score considered
		return score_high < 22 ? score_high:score_low; //returns best score below 22
	}
}
void Participant::printScore()	//print score
{
	std::cout<<"Score = "<<bestscore()<<"\n";
}
