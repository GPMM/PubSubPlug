CPP=g++
FLAGS=-std=c++11 -Wall
LIB_DIR=../lib
PLUG_DIR=../plug/mqtt
CFLAGS=-I../include -I$(PLUG_DIR)/include
LIB=-luv

test_mqtt: test_mqtt.o
	$(CPP) $(FLAGS) $< $(LIB_DIR)/PubSubClient.o $(LIB_DIR)/AsyncLoop.o $(PLUG_DIR)/MQTTClient.o -o test_mqtt $(CFLAGS) $(LIB)

test_mqtt.o: lib
	$(CPP) $(FLAGS) -o $@ -c test_mqtt.cpp $(CFLAGS)

lib:
	$(MAKE) -C $(PLUG_DIR)

clean:
	rm *.o test_mqtt
