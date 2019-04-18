CC = g++
CFLAGS = -g -Wall

ALL: main.o vector.o
	$(CC) $(CFLAGS) -o main main.o vector.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

vector.o: vector.cpp vector.h
	$(CC) $(CFLAGS) -o $@ -c $<