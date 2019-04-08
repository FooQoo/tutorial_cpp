CC = g++
CFLAGS = -g -Wall
OBJS = main.o twostrings.o

ALL: main.o twostrings.o
	$(CC) $(CFLAGS) -o main main.o twostrings.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

twostrings.o: twostrings.cpp twostrings.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
	rm -rf $(OBJS)