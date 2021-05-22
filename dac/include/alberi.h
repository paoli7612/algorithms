#ifndef MODULO_ALBERI
#define MODULO_ALBERI

#include <iostream>
#include <fstream>

struct NodoAlbero_t {

    int value;

    NodoAlbero_t *primoFiglio;
    NodoAlbero_t *prossimoFratello;
    NodoAlbero_t *padre;
};

#endif // MODULO_ALBERI
