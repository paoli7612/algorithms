main: array.o sort.o
	g++ main.cc array.o sort.o -o main.out; ./main.out

sort.o:
	g++ sort.cc -c -o sort.o

array.o:
	g++ array.cc -c -o array.o

clean:
	rm *.o main.out