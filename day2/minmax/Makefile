CC = g++
CFLAGS = -g -Wall
OBJS = main.o minmax.o

ALL: main.o minmax.o
	$(CC) $(CFLAGS) -o main main.o minmax.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

minmax.o: minmax.cpp minmax.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
	rm -rf $(OBJS)