//*Class Participant (Either Deaker or Player)*
//===================================
//include guard

#ifndef __PARTICIPANT_H_INCLUDED__
#define __PARTICIPANT_H_INCLUDED__

//=================================
//included dependencies

#include "card.h"
#include <vector>

//==============================
//actual class

class Participant
{
protected:
        thrust::host_vector<Card> hand; //vector containing cards in hand of participant
        int non_ace_total;      //total of non ace cards in hand
        int num_aces;           //number of aces in hand
public:
        void add(Card c);       //add card to hand
        int bestscore();        //returns best possible score
};
#endif //__PARTICIPANT_H_INCLUDED__
