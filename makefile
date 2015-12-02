CC=nvcc
OPTIONS=--std=c++11
DEPENDS= card.cpp card.h dealer.cpp dealer.h deck.cpp deck.h participant.cpp participant.h player.cpp player.h
CFLAGS=
LIBS= -lgtest -lpthread

main: $(DEPENDS)
  $(CC) -o main main.cpp $(OPTIONS)

test: gtest.cpp
  $(CC) -o gtest gtest.cpp $(LIBS)

install: main test

test: test
  srun ./test

run: main
  srun ./main
