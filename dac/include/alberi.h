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
    Albero_t nuovo_nodo(int value, NodoAlbero_t *primoFiglio=NULL, NodoAlbero_t *prossimoFratello=NULL, NodoAlbero_t *padre=NULL);

    void stampa_preorder(Albero_t albero);
    void stampa_postorder(Albero_t albero);

    void aggiungi_fratello(Albero_t albero, NodoAlbero_t *nodo);
    void aggiungi_figlio(Albero_t albero, NodoAlbero_t *nodo);

    void aggiungi_fratello(Albero_t albero, int value);
    void aggiungi_figlio(Albero_t albero, int value);


} // namespace alberi

#endif // MODULO_ALBERI
