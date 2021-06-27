COMPITO_O = compito.out

GRAFO_O = grafi.o
CODA_O = coda.o
NODO_O = node.o

run: $(COMPITO_O)
	./$(COMPITO_O)
	rm *.o*

$(COMPITO_O): $(GRAFO_O) $(CODA_O) $(NODO_O)
	g++ compito.cc $(GRAFO_O) $(CODA_O) $(NODO_O) -o $(COMPITO_O)

$(GRAFO_O): grafi.cc
	g++ grafi.cc -c -o $(GRAFO_O)

$(CODA_O): coda.cc
	g++ coda.cc -c -o $(CODA_O)

$(NODO_O): node.cc
	g++ node.cc -c -o $(NODO_O)