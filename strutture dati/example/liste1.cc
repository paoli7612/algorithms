#include <iostream>

using namespace std;

#include "../liste/lista.hpp"

int main(int argc, char** argv){

    srand(time(NULL));

    lista_t lista = NULL;

    int n;

    if (argc == 1)
        n = 5;
    else
        n = argv[1][0]-'0';

    for (int i=0; i<n; i++)
    {
        int value = rand()%20 - 10;
        lista_aggiungi_coda(lista, value);
        lista_stampa(lista);
    }

    cout << endl << "Lunghezza: " << lista_lunghezza(lista) << endl << endl;
    cout << "Sort" << endl;
    lista_sort(lista);
    lista_stampa(lista);


    return 0;
}