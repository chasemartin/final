#include <iostream>
#include <thrust/host_vector.h>
#include <thrust/device_vector.h>
#include <thrust/for_each.h>
#include <thrust/execution_policy.h>

#include "deck.h"
#include "player.h"
#include "dealer.h"
#include <unistd.h>

Player p;
Deck d;
Dealer computer;

struct blackjack_functor
{
do
{

//Shuffle decks seperately so they are unique shuffles
d.shuffleDeck();

// Initial Deal of 2 cards to both Dealer and Player

computer.add(d.drawCard());
computer.add(d.drawCard());

p.add(d.drawCard());
p.add(d.drawCard());

while(p.hit_or_stay())  //players turn
{
        p.add(d.drawCard());

}

if (p.bestscore()>21)   //if player exceeded a total of 21
{
        p.lost();       //player lost
}

else                    //dealers turn
{

        while(computer.hit_or_stay())
        {
                computer.add(d.drawCard());
        }
        if(computer.bestscore()>21)
        {
                p.won();
        }
        else
        {
                if(p.bestscore() > computer.bestscore())
                {
                        p.won();
                }
                else if(p.bestscore() < computer.bestscore())
                {
                        p.lost();
                }
                else
                {
                        p.tie();
                }
        }
}
}
}

int main(void)

{
d.Deck();               //call multi deck and deck class
d.multiDeck();

thrust::for_each(d_deck.begin(), d_deck.end(),blackjack_functor()); //play the game for each deck in the multi deck

cout<<end1;
cout<<"Won "<<p.getWinpercentage()*100<<"\ % of all games played \n";
cout<<"Games Played = "<<p.numPlayed()<<end1;
cout<<"Games Tied = "<<p.numWon()<<end1;
