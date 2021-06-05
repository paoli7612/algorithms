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

typedef NodoAlbero_t *Albero_t;

namespace alberi
{
    Albero_t nuovo_nodo(int value, NodoAlbero_t *primoFiglio, NodoAlbero_t *prossimoFratello, NodoAlbero_t *padre);

    void stampa_preorder(Albero_t albero);
    void stampa_postorder(Albero_t albero);

} // namespace alberi

#endif // MODULO_ALBERI
