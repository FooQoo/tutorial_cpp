CC = g++
CFLAGS = -g -Wall

ALL: main.o car.o ambulance.o
	$(CC) $(CFLAGS) -o main main.o car.o ambulance.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

car.o: car.cpp car.h
	$(CC) $(CFLAGS) -o $@ -c $<

ambulance.o: ambulance.cpp ambulance.h
	$(CC) $(CFLAGS) -o $@ -c $<