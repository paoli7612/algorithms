#include <iostream>

struct AlberoNodo_t {

    int vertice;
    float peso;
    AlberoNodo_t *primoFiglio;
    AlberoNodo_t *prossimoFratello;

};

typedef AlberoNodo_t *Albero_t;

void aggiungiFratello(Albero_t albero, AlberoNodo_t *nodo);
void aggiungiFratello(Albero_t albero, int vertice, float peso);

void aggiungiFiglio(Albero_t albero, AlberoNodo_t *nodo);
void aggiungiFiglio(Albero_t albero, int vertice, float peso);

void stampa_albero(Albero_t albero);
