// g++ main.cc -o main.out -Wall --pedantic; ./main.out
#include <iostream>
#include <cstring>


using namespace std;
#include "lista.hpp"

int main(int argc, char** argv)
{
    lista_t lista = NULL;

    const char numeri[] = "2634872349023423";

    for (size_t i=0; i<strlen(numeri); i++)
        if (numeri[i] > '4')
            lista_aggiungi_coda(lista, numeri[i]-'0');
        else
            lista_aggiungi_testa(lista, numeri[i]-'0');

    cout << "Lista:  ";
    lista_stampa(lista);
    cout << "Indici: ";
    for (int i=0; i<lista_lunghezza(lista); i++)
        cout << i << "\t";
    cout << endl;

    cout << "Lunghezza" << lista_lunghezza(lista) << endl;
    cout << "A posizione 6 ce': " << lista_nodo_posizione(lista, 6)->value << endl;

    cout << "Cambio il nodo 6 e ci metto il 12 dentro" << endl;
    lista_cambia_posizione(lista, 6, 12);
    cout << "\t";
        lista_stampa(lista);

    return 0;
}