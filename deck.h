#ifndef __DECK_H_INCLUDED__
#define DECK_H_INLCLUDED__

#include <thrust/host_vector.h>
#include <thrust/device_vector.h>
#include <thrust/swap.h>
#include <time.h>
#include "card.h"


class Deck 
{

int nextcardidx;

public:
        Card drawCard();
        Deck();
        multiDeck();
        void shuffleDeck();
};
#endif


	 



