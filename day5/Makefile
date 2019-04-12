CC = g++
CFLAGS = -g -Wall
OBJS = main.o rat.o

ALL: main.o rat.o
	$(CC) $(CFLAGS) -o main main.o rat.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

rat.o: rat.cpp rat.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
	rm -rf $(OBJS)