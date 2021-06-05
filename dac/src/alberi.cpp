#include "../include/alberi.h"

Albero_t alberi::nuovo_nodo(int value, NodoAlbero_t *primoFiglio=NULL, NodoAlbero_t *prossimoFratello=NULL, NodoAlbero_t *padre=NULL)
{
    return new NodoAlbero_t {
        value,
        primoFiglio, prossimoFratello, padre
    };
}

void alberi::stampa_preorder(Albero_t albero)
{
    if (albero == NULL)
        return;
    
    std::cout << albero->value << " ";

    Albero_t a = albero->primoFiglio;
    while (a != NULL)
    {
        stampa_preorder(a);
        a = a->prossimoFratello;
    }
}

void alberi::stampa_postorder(Albero_t albero)
{
    if (albero == NULL)
        return;
    
    Albero_t a = albero->primoFiglio;
    while (a != NULL)
    {
        stampa_preorder(a);
        a = a->prossimoFratello;
    }

    std::cout << albero->value << " ";
}