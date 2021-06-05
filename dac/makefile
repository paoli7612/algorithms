ALBERI_O = bin/alberi.o
LISTE_O = bin/liste.o
GRAFI_O = bin/grafi.o

run: bin/main.out
	./bin/main.out
	rm bin/*

bin/main.out: $(ALBERI_O) $(LISTE_O) $(GRAFI_O)
	g++ src/main.cpp $(LISTE_O) $(ALBERI_O) $(GRAFI_O) -o bin/main.out

$(ALBERI_O):
	g++ src/alberi.cpp -c -o $(ALBERI_O)

$(LISTE_O): 
	g++ src/liste.cpp -c -o $(LISTE_O)

$(GRAFI_O):
	g++ src/grafi.cpp -c -o $(GRAFI_O)

clean:
	rm bin/*

