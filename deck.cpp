#include<iostream>
#include<thrust/host_vector.h>
#include<thrust/device_vector.h>
#include<thrust/swap.h>

#include "deck.h"

int x;
int nextcardidx;

void Deck::shuffleDeck(){ // function to shuffle deck
        thrust::device_vector<int> d_deck = deck;
        	for(x=0; x<105; x++){
        		int pos1; // dictates end of fisrt range
        		int pos2; //dictates beginging of the second range
       			pos1 = rand()%45; //generates random poition
			pos2 = pos1 + 1;
                thrust::swap_ranges(    d_deck.begin(),
                                        d_deck.begin() + pos1,
                                        d_deck.begin() + pos2);
};

Deck::Deck(){ //initilizes a vector for deck
thrust::host_vector<int> deck(52);
        deck[0]=2;    deck[1]=2;    deck[2]=2;    deck[3]=2;
        deck[4]=3;    deck[5]=3;    deck[6]=3;    deck[7]=3;
        deck[8]=4;    deck[9]=4;    deck[10]=4;   deck[11]=4;
        deck[12]=5;   deck[13]=5;   deck[14]=5;   deck[15]=5;
        deck[16]=6;   deck[17]=6;   deck[18]=6;   deck[19]=6;
        deck[20]=7;   deck[21]=7;   deck[22]=7;   deck[23]=7;
        deck[24]=8;   deck[25]=8;   deck[26]=8;   deck[27]=8;
        deck[28]=9;   deck[29]=9;   deck[30]=9;   deck[31]=9;
        deck[32]=10;  deck[33]=10;  deck[34]=10;  deck[35]=10;
        deck[36]=10;  deck[37]=10;  deck[38]=10;  deck[39]=10;
        deck[40]=10;  deck[41]=10;  deck[42]=10;  deck[43]=10;
        deck[44]=10;  deck[45]=10;  deck[46]=10;  deck[47]=10;
        deck[48]=1;   deck[49]=1;   deck[50]=1;   deck[51]=1;
        
Deck::multiDeck(){ //creates 1000s decks for paralization
	for (x=0; x<1000; x++){
		thrust::device_vector <int> d_deck[x] = deck;
	};
		
};
       
Deck::drawCard(){ //deals one card 
	nextcardidx = 0;
			if (nextcardidx<0 || nextcardidx > 52);
				return deck[nextcardidx++];
};

