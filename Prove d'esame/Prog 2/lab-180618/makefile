MAIN_O = compito.out
MAIN_C = compito.cc

CARTA_O = carta.o
CARTA_C = carta.cc
BST_O = bst.o
BST_C = bst.cc

run: $(MAIN_O)
	./$(MAIN_O)

clean: 
	rm *.o*

F = $(MAIN_C) $(CARTA_O) $(BST_O)
$(MAIN_O): $(F)
	g++ $(F) -o $(MAIN_O)

$(CARTA_O): $(CARTA_C)
	g++ $(CARTA_C) -c -o $(CARTA_O)

$(TIPO_O): $(TIPO_C)
	g++ $(TIPO_C) -c -o $(TIPO_O)
