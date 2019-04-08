CC = g++
CFLAGS = -g -Wall
OBJS = main.o sample.o

ALL: main.o sample.o
	$(CC) $(CFLAGS) -o main main.o sample.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

sample.o: sample.cpp sample.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
	rm -rf $(OBJS)