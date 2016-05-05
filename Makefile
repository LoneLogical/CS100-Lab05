
CC=g++


CFLAGS=-c -Wall

all: lab05

lab05: main.o class.o decorator.o sort.o container.o
	$(CC) main.o class.o decorator.o sort.o container.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

class.o: class.cpp
	$(CC) $(CFLAGS) class.cpp

decorator.o: decorator.cpp
	$(CC) $(CFLAGS) decorator.cpp

sort.o: sort.cpp
	$(CC) $(CFLAGS) sort.cpp

container.o: container.cpp
	$(CC) $(CFLAGS) container.cpp


