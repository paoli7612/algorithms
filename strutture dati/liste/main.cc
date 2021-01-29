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

    cout << "Ordino la lista (o almeno ci provo)" << endl << "\t";
    lista_sort(lista);
    lista_stampa(lista);

    return 0;
}