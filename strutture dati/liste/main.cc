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
        
        
        int r = rand()%10;
        if (r > 5)
            lista_aggiungi_coda(lista, r);
        else
            lista_aggiungi_testa(lista, r);
        lista_stampa(lista);
    }
    
    lista_togli_coda(lista);
    lista_togli_testa(lista);
    lista_stampa(lista);

    /*for (int i=0; i<5; i++)
    {
        lista_togli_testa(lista);
        lista_stampa(lista);
    }

    for (int i=0; i<5; i++)
    {
        lista_togli_coda(lista);
        lista_stampa(lista);
    }
*/
    
    
/*

    

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