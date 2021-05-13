
run: main.out
	./main.out

main.out: tree.o queue.o
	g++ main.cpp tree.o queue.o -o main.out

tree.o:
	g++ tree.cpp -c -o tree.o

queue.o: 
	g++ queue.cpp -c -o queue.o

clean:
	rm *.o *.out

