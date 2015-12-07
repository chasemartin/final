#include <thrust/host_vector.h>
#include <thrust/device_vector.h>
#include <thrust/swap.h>
#include <time.h>

#include "main.cpp"
#include <gtest/gtest.h>

TEST(Deck, NewDeckHas52Cards){
  thrust::host_vector<int> deck(52);
  EXPECT_EQ(52, deck.size());
};

TEST(Deck, Shuffle){
  thrust::host_vector<int> deck(52);
  shuffleDeck();
  EXPECT_FALSE(shuffle(52)=deck(52));
};

TEST(Player, Win){
  int p.bestscore = 13;
  int computer.bestscore = 21;
    ASSERT_TRUE(playerWon(p.bestscore>computer.bestscore));
    ASSERT_FALSE(playerWon(p.bestscore<computer.bestscore));
};

int main( int argc, char ** argv){
    ::testing::InitGoogleTest(&argc, argv);
      return RUN_ALL_TESTS();
};
};
