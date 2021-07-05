MAIN_OUT = main.out
MAIN_CC = compito.cc

run: $(MAIN_OUT)
	./$(MIAN_OUT)

clean:
	rm *.o*

$(MAIN_OUT): $(GRAFO_O)
	g++ $(MAIN_CC) $(GRAFO_O) -o $(MAIN_OUT)

$(GRAFO_O): grafo.cc
	g++ grafo.cc -c -o $(GRAFO_O)
