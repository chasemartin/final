#include "card.h"
#include "deck.h"
#include <iostream>
#include <thrust/host_vector.h>

Deck d;

Card::Card(int c){ // set value of card
  d.deck();
  value=c;
  };
  
int Card::getValue(){ //returns value of card
  return value;
  };
