//*Class Dealer*
#include "dealer.h"

bool Dealer::hit_or_stay() //dealer hits on soft 17
{
	int score_low; //when aces are considered as 1
	int score_high; //when aces are considered as 11

	if (num_aces==0)
	{
		return non_ace_total<17 ? true:false; //dealer stands on hard 17 and above
	}
	else 
	{
		score_low=non_ace_total + num_aces;
		score_high=non_ace_total + num_aces + 10;

		if (score_high<18) //hit on soft 17 or lower
		{
			return true;
		}
		else if (score_high>21 && score_low<17) //lower score is below 17, aces are considered as 1
		{
			return true;
		}
		else //higher score is more than 17 or lower score is more than 16
		{
			return false;
		}
	}
}
