CC = g++
CFLAGS = -g -Wall

ALL: main.o fundcalc.o newcalc.o
	$(CC) $(CFLAGS) -o main main.o fundcalc.o newcalc.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

fundcalc.o: fundcalc.cpp fundcalc.h
	$(CC) $(CFLAGS) -o $@ -c $<

newcalc.o: newcalc.cpp newcalc.h
	$(CC) $(CFLAGS) -o $@ -c $<