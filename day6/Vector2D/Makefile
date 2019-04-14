CC = g++
CFLAGS = -g -Wall

ALL: main.o Vector2D.o Position2D.o
	$(CC) $(CFLAGS) -o main main.o Vector2D.o Position2D.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

Vector2D.o: Vector2D.cpp Vector2D.h
	$(CC) $(CFLAGS) -o $@ -c $<

Position2D.o: Position2D.cpp Position2D.h
	$(CC) $(CFLAGS) -o $@ -c $<