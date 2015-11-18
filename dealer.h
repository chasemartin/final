//**DEALER CLASS**
//=======================
//include guard

#ifndef __DEALER_H_INCLUDED__
#define __DEALER_H_INCLUDED__

//==========================
//included dependencies

#include <vector>
#include "card.h"
#include <iostream>
#include "participant.h"

//====================
//the actual class

class Dealer: public Participant //dealer inherits from player
{
public:
	bool hit_or_stay(); //returns true if dealer hits else false (dealer hits on soft 17
};

#endif //__DEALER_H_INCLUDED__

