#ifndef DECK_H
#define DECK_H
#define __both__ 


class Deck {
    public:
       __both__ Deck();
       __both__ Card dealOneCard();
       __both__ void shuffle();
        
    private:
        Card _cards[52];
        int  _nextCardIndex;
};    

#endif
	 



