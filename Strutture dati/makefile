MAIN_O = bin/main.out

LIST_C = src/list.cpp
GRAPH_C = src/graph.cpp
TREE_C = src/tree.cpp

LIST_O = bin/list.o
GRAPH_O = bin/graph.o
TREE_O = bin/tree.o

run: $(LIST_O) $(GRAPH_O) $(TREE_O)
	g++ src/main.cpp $(LIST_O) $(GRAPH_T) $(TREE_O) -o $(MAIN_O)
	./$(MAIN_O)

clean:
	rm bin/*.o*

$(LIST_O): $(LIST_C)
	g++ $(LIST_C) -c -o $(LIST_O) 

$(GRAPH_O): $(GRAPH_C)
	g++ $(GRAPH_C) -c -o $(GRAPH_O) 

$(TREE_O): $(TREE_C)
	g++ $(TREE_C) -c -o $(TREE_O) 