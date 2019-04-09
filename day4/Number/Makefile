CC = g++
CFLAGS = -g -Wall
OBJS = main.o number.o

ALL: main.o number.o
	$(CC) $(CFLAGS) -o main main.o number.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

number.o: number.cpp number.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
	rm -rf $(OBJS)