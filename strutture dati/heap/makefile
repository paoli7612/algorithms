run: main.out
	./main.out

main.out: heap.o
	g++ main.cpp heap.o -o main.out

heap.o:
	g++ heap.cpp -c -o heap.o

clean:
	rm main.out *.o