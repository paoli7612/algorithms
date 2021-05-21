#include <iostream>

struct AlberoNodo_t {

    int vertice;
    AlberoNodo_t *primoFiglio;
    AlberoNodo_t *prossimoFratello;

};

typedef AlberoNodo_t *Albero_t;
