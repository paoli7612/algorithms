# this target will compile all the files
all: main.o coda.o
	g++ main.o coda.o -o main

main.o: main.cc
	g++ -c main.cc

coda.o: coda.cc
	g++ -c coda.cc

clean:
	rm -rf *.o main
