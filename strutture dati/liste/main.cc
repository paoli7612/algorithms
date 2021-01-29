// g++ main.cc -o main.out -Wall --pedantic; ./main.out
#include <iostream>
#include <cstring>


using namespace std;
#include "listalente.hpp"

int main(int argc, char** argv)
{
    srand(time(NULL));

    lista_t lista;
    lista_inizializza(lista, 10);

    for (int i=0; i<10; i++)
    {
        
         lista_stampa(lista);
        int r = rand()%10;
        if (r > 5)
            lista_aggiungi_coda(lista, r);
        else
            lista_aggiungi_testa(lista, r);
    }
        
    
/*

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

    cout << "scambio il secondo con il terzo numero" << endl << "\t";
    lista_scambia_nodi(lista->next, lista->next->next);
    lista_stampa(lista);

    cout << "Ordino la lista (o almeno ci provo)" << endl << "\t";
    lista_sort(lista);
    lista_stampa(lista);

    cout << "Il numero minimo della lista e': " << lista_minimo(lista)->value << endl;
    cout << "Il numero massimo della lista e': " << lista_massimo(lista)->value << endl;
*/
    return 0;
}