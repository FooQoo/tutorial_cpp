CC = g++
CFLAGS = -g -Wall
OBJS = main.o data.o

ALL: main.o data.o
	$(CC) $(CFLAGS) -o main main.o data.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

data.o: data.cpp data.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
	rm -rf $(OBJS)