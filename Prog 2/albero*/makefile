
run: main.out
	./main.out

main.out: tree.o
	g++ main.cpp tree.o -o main.out

tree.o: queue.o
	g++ tree.cpp queue.o -c -o tree.o

queue.o: 
	g++ queue.cpp -c -o queue.o

clean:
	rm *.o *.out

