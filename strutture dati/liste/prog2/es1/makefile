
run: main.out
	./main.out
	rm main.out liste.o

main.out: liste.o
	g++ main.cpp liste.o -o main.out

liste.o:
	g++ liste.cpp -c -o liste.o

	