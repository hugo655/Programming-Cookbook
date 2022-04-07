CC=gcc
CFLAGS=-g -Wall

all: main

main: main.c util.o
	#(CC) $(CFLAGS) -o main main.c util.o

util.o: util.c
	#(CC) $(CFLAGS) -c util.c -o util.o

clean:
	rm *.o
