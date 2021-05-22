run: main.out
	./main.out $(input); rm *.o
	
main.out: grafi.o liste.o alberi.o
	g++ main.cpp grafi.o liste.o alberi.o -o main.out

grafi.o:
	g++ grafi.cpp -c -o grafi.o

liste.o:
	g++ liste.cpp -c -o liste.o

alberi.o:
	g++ alberi.cpp -c -o alberi.o

clean:
	rm *.o*