#include "alberi.h"

void stampa_albero(Albero_t albero)
{
    std::cout << albero->vertice << "[" << albero->peso << "]";
    
    AlberoNodo_t *ap = albero->primoFiglio;
    while (ap != NULL)
    {
        std::cout << "< ";
        stampa_albero(ap);
        ap = ap->prossimoFratello;
        std::cout << " >";
    }
}

void aggiungiFratello(Albero_t albero, AlberoNodo_t *nodo)
{
    while (albero->prossimoFratello != NULL)
        albero = albero->prossimoFratello;
    albero->prossimoFratello = nodo;
}

void aggiungiFratello(Albero_t albero, int vertice, float peso)
{
    aggiungiFratello(albero, new AlberoNodo_t{vertice, peso, NULL, NULL});
}

void aggiungiFiglio(Albero_t albero, AlberoNodo_t *nodo)
{
    if (albero->primoFiglio == NULL)
        albero->primoFiglio = nodo;
    else
        aggiungiFratello(albero->primoFiglio, nodo);
}

void aggiungiFiglio(Albero_t albero, int vertice, float peso)
{
    aggiungiFiglio(albero, new AlberoNodo_t {vertice, peso, NULL, NULL});
}