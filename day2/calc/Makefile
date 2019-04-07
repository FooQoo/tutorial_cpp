CC = g++
CFLAGS = -g -Wall
OBJS = exercise.o calc.o

ALL: exercise.o calc.o
	$(CC) $(CFLAGS) -o exercise exercise.o calc.o

exercise.o: exercise.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

calc.o: calc.cpp calc.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
	rm -rf $(OBJS)