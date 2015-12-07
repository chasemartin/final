#ifndef __CARD_H_INCLUDED__
#define __CARD_H_INCLUDED__

#include "deck.h"
#include <thrust/host_vector.h>

class Card
{
  thrust::host_vector<int> deck(52);
  int value;
  public:
    Card(int c);
    int getValue();
};
#endif
