run: main.out
	./main.out $(input); rm *.o
	
main.out: grafi.o
	g++ main.cpp grafi.o liste.o -o main.out

grafi.o: liste.o
	g++ grafi.cpp -c -o grafi.o

liste.o:
	g++ liste.cpp -c -o liste.o

clean:
	rm *.o*