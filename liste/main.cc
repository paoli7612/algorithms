// g++ main.cc -o main.out -Wall --pedantic; ./main.out
#include <iostream>

#include "lista.hpp"

using namespace std;

int main(int argc, char** argv)
{
    lista_t lista = NULL;

    lista_aggiungi_coda(lista, 5);
    lista_aggiungi_coda(lista, -2);

    for (int i=0; i<10; i++)
        lista_aggiungi_coda(lista, 4*i);

    lista_aggiungi_coda(lista, 5);
    lista_aggiungi_coda(lista, 7);

    lista_aggiungi_testa(lista, 1);
    lista_aggiungi_testa(lista, 1);

    lista_togli(lista, lista->next);
    lista_stampa(lista);
    lista_togli(lista, lista->next->next);
    lista_stampa(lista);
    lista_togli(lista, lista);
    lista_stampa(lista);
}