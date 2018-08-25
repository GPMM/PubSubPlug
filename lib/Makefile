CPP=g++
FLAGS=-std=c++11 -Wall
CFLAGS=-I../include
LIB=-luv

PubSubClient.o: AsyncLoop.o
	$(CPP) $(FLAGS) -c PubSubClient.cpp $(CFLAGS)

AsyncLoop.o:
	$(CPP) $(FLAGS) -c AsyncLoop.cpp $(CFLAGS)

clean:
	rm *.o
