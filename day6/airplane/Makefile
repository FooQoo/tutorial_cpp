CC = g++
CFLAGS = -g -Wall

ALL: main.o airplane.o fighter.o
	$(CC) $(CFLAGS) -o main main.o airplane.o fighter.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

airplane.o: airplane.cpp airplane.h
	$(CC) $(CFLAGS) -o $@ -c $<

fighter.o: fighter.cpp fighter.h
	$(CC) $(CFLAGS) -o $@ -c $<