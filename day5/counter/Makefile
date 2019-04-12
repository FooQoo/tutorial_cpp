CC = g++
CFLAGS = -g -Wall
OBJS = main.o counter.o

ALL: main.o counter.o
	$(CC) $(CFLAGS) -o main main.o counter.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

counter.o: counter.cpp counter.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
	rm -rf $(OBJS)