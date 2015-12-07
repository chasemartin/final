//*Class Participant (Either Deaker or Player)*
//===================================
//include guard

#ifndef __PARTICIPANT_H_INCLUDED__
#define __PARTICIPANT_H_INCLUDED__

//=================================
//included dependencies

#include "card.h"
#include "deck.h"
#include <thrust/host_vector.h>

//==============================
//actual class

class Participant
{
protected:
        int non_ace_total;      //total of non ace cards in hand
        int num_aces;           //number of aces in hand
public:
        void add(Card c);       //add card to hand
        int bestscore();        //returns best possible score
};
#endif //__PARTICIPANT_H_INCLUDED__
