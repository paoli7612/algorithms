run: compito.out
	./compito.out

compito.out: compito.cc liste.o tipo.o
	g++ compito.cc -o compito.out

liste.o: liste.cc
	g++ liste.cc -c -o liste.o

tipo.o: tipo.cc
	g++ tipo.cc -c -o tipo.o

clean: 
	rm -rf *.o*
