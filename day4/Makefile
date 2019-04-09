CC = g++
CFLAGS = -g -Wall
OBJS = main.o car.o

ALL: main.o car.o
	$(CC) $(CFLAGS) -o main main.o car.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

car.o: car.cpp car.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
	rm -rf $(OBJS)