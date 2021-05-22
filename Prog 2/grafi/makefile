run: main.out
	./main.out

main.out: main.cpp grafi.o
	g++ main.cpp grafi.o -o main.out

grafi.o: grafi.cpp
	g++ grafi.cpp -c -o grafi.o

clean:
	rm main.out *.o