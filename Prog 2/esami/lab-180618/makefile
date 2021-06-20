
run: compito.out
	./compito.out

compito.out: carta.o bst.o
	g++ compito.cc carta.o bst.o -o compito.out

carta.o: 
	g++ carta.cc -c -o carta.o

bst.o:
	g++ bst.cc -c -o bst.o

clean: 
	rm *.o*