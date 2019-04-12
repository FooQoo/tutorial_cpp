CC = g++
CFLAGS = -g -Wall
OBJS = main.o object.o

ALL: main.o object.o
	$(CC) $(CFLAGS) -o main main.o object.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

object.o: object.cpp object.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
	rm -rf $(OBJS)