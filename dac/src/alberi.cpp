#include "../include/alberi.h"

Albero_t alberi::nuovo_nodo(int value, NodoAlbero_t *primoFiglio, NodoAlbero_t *prossimoFratello, NodoAlbero_t *padre)
{
    return new NodoAlbero_t {
        value,
        primoFiglio, prossimoFratello, padre
    };
}

void alberi::aggiungi_fratello(Albero_t albero, NodoAlbero_t *nodo)
{
    for (; albero->prossimoFratello!=NULL; albero=albero->prossimoFratello);
    albero->prossimoFratello = nodo;
}

void alberi::aggiungi_fratello(Albero_t albero, int value)
{
    aggiungi_fratello(albero, nuovo_nodo(value));
}

void alberi::aggiungi_figlio(Albero_t albero, NodoAlbero_t *nodo)
{
    if (albero->primoFiglio == NULL)
    {
        albero->primoFiglio = nodo;
        return;
    }
    aggiungi_fratello(albero->primoFiglio, nodo);
}

void alberi::aggiungi_figlio(Albero_t albero, int value)
{
    aggiungi_figlio(albero, nuovo_nodo(value));
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