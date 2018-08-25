CPP=g++
FLAGS=-std=c++11 -Wall
CFLAGS=-I../../include -I./include
LIB_DIR=../../lib
LIB=-luv

MQTTClient.o: lib
	$(CPP) $(FLAGS) -c MQTTClient.cpp $(CFLAGS)

lib:
	$(MAKE) -C $(LIB_DIR)

clean:
	rm *.o
