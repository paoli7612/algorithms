run: main.out
	./main.out

main.out: main.cpp tree.o
	g++ main.cpp tree.o -o main.out

tree.o: tree.cpp
	g++ tree.cpp -c -o tree.o

clean:
	rm main.out *.o