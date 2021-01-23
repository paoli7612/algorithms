// g++ main.cc -o main.out -Wall --pedantic; ./main.out
#include <iostream>
#include <cstring>

#include "lista.hpp"

using namespace std;

int main(int argc, char** argv)
{
    lista_t lista = NULL;

    const char numeri[] = "2634872349023423";

    for (size_t i=0; i<strlen(numeri); i++)
        if (numeri[i] > '4')
            lista_aggiungi_coda(lista, numeri[i]-'0');
        else
            lista_aggiungi_testa(lista, numeri[i]-'0');

    lista_stampa(lista);

    return 0;
}