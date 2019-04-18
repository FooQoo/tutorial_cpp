CC = g++
CFLAGS = -g -Wall

ALL: main.o calc.o
	$(CC) $(CFLAGS) -o main main.o calc.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

calc.o: calc.cpp calc.h
	$(CC) $(CFLAGS) -o $@ -c $<