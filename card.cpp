#include "card.h"
#include <iostream>

Deck d;

Card::Card(int c){ // set value of card
  d.deck();
  value=c;
  };
  
int Card::getValue(){ //returns value of card
  return value;
  };
