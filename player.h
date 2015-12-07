//*Class Participant*
#include "participant.h"
#include <iostream>
#include "card.h"

void Participant::add(Card c)   //add card to hand
{
        if(c.getValue()==1)     //maintain correct non ace total and ace count
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
int Participant::bestscore()
{
        int score_high;
        int score_low;
        if (num_aces==0)
        {
                return non_ace_total;   //if no aces in hand
        }
        else
        {
                score_low = non_ace_total + num_aces;   //lower possible score considered
                score_high = non_ace_total + 10 + num_aces;     //higher possible score considered
                return score_high < 22 ? score_high:score_low; //returns best score below 22
        }
}
