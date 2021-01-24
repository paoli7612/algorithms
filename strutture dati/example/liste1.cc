#include <iostream>

using namespace std;

#include "../liste/lista.hpp"

int main(int argc, char** argv){

    lista_t lista = NULL;

    int i;
    do {
        cin >> i;
        if (i < 0)
            lista_aggiungi_testa(lista, i);
        else if (i > 0)
            lista_aggiungi_coda(lista, i);
        lista_stampa(lista);
    } while (i != 0);

    return 0;
}