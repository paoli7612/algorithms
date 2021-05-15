
run: main.out
	./main.out

main.out: list.o
	g++ main.cpp list.o -o main.out

list.o:
	g++ list.cpp -c -o list.o

clean:
	rm *.out *.o