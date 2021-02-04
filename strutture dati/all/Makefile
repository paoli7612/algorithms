# this target will compile all the files
all: main

main: main.o code.o
	g++ main.o code.o -o main

main.o: main.cc
	g++ -c main.cc

code.o: code.cc
	g++ -c code.cc
	
clean:
	rm -rf *.o main
