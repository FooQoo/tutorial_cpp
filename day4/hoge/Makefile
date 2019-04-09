CC = g++
CFLAGS = -g -Wall
OBJS = main.o hoge.o

ALL: main.o hoge.o
	$(CC) $(CFLAGS) -o main main.o hoge.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

hoge.o: hoge.cpp hoge.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
	rm -rf $(OBJS)