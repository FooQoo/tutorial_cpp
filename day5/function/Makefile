CC = g++
CFLAGS = -g -Wall
OBJS = main.o function.o

ALL: main.o function.o
	$(CC) $(CFLAGS) -o main main.o function.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

function.o: function.cpp function.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
	rm -rf $(OBJS)