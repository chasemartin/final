#ifndef __CARD_H_INCLUDED__
#define __CARD_H_INCLUDED__

#include "deck.h"
#include <thrust/host_vector.h>

class Card : public Deck //card inherits from Deck
{
  thrust::host_vector<Card> deck(52); //vector containing cards in the deck
  int value;
  public:
    Card(int c);    //c is the value of the card from the deck
    int getValue(); //returns the value
};
#endif
