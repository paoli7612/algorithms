#include <iostream>

using namespace std;

#include "liste.h"

int main(int argc, char **argv)
{
    srand(time(NULL));

    cout << "lista casuale da 10 elementi" << endl;
    list_t lista = crea_lista_casuale(10);
    stampa_lista(lista);

    cout << "cerco il primo 4 nella lista" << endl;
    node_t *nodo = cerca(lista, 4);
    if (nodo != NULL)
    {
        cout << "trovato: " << nodo << endl << endl;

        cout << "cancello il nodo dalla lista" << endl;
        cancella_nodo(lista, nodo);
        stampa_lista(lista);
        
        cout << "rimangono " << conta(lista, 4) << " nodi con il numero 4 " << endl;
    }
    else
    {
        cout << "non lo ho trovato" << endl << endl;
    }

    cout << "La lista è lunga " << lunghezza(lista) << endl;

    return 0;
}