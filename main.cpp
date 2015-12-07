#include <iostream>
#include <thrust/host_vector.h>
#include <thrust/device_vector.h>
#include <thrust/for_each.h>
#include <thrust/execution_policy.h>

#inlcude "card.h"
#include "deck.h"
#include "player.h"
#include "dealer.h"
#include <unistd.h>

struct blackjack_functor
{

//Shuffle decks seperately so they are unique shuffles
d.shuffleDeck();

// Initial Deal of 2 cards to both Dealer and Player

computer.add(d.drawcard());
computer.add(d.drawcard());

p.add(d.drawcard());
p.add(d.drawcard());

while(p.hit_or_stay())  //players turn
{
        p.add(d.drawcard());

};

if (p.bestscore()>21)   //if player exceeded a total of 21
{
        p.lost();       //player lost
};

else                    //dealers turn
{

        while(computer.hit_or_stay())
        {
                computer.add(d.drawcard());
        };
        if(computer.bestscore()>21)
        {
                p.won();
        };
        else
        {
                if(p.bestscore() > computer.bestscore())
                {
                        p.won();
                };
                else if(p.bestscore() < computer.bestscore())
                {
                        p.lost();
                };
                else
                {
                        p.tie();
                };
        };
};
};

int main(void)
Player p;
Deck d;
Dealer computer;

{
d.Deck();               //call multi deck and deck class
d.multiDeck();

thrust::for_each(d_deck.begin(), d_deck.end(),blackjack_functor()); //play the game for each deck in the multi deck

cout<<end1;
cout<<"Won "<<p.getWinpercentage()*100<<"% of all games played \n";
cout<<"Games Played = "<<p.numPlayed()<<end1;
cout<<"Games Won = "<<p.numWon()<<end1;
}
