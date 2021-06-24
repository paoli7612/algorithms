clean:
	rm *.o*

run: compito.out
	./compito.out

compito.out: graph.o node.o
	g++ compito.cc graph.o node.o -o compito.out

graph.o:
	g++ graph.cc -c -o graph.o

node.o:
	g++ node.cc -c -o node.o
