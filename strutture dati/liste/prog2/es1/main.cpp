#include <iostream>

#include "liste.h"

using namespace std;

int main(int argc, char **argv)
{

    list_t lista = NULL;

    const char menu[] =
        "1. aggiungi in testa\n"
        "2. aggiungi in coda\n"
        "3. aggiungi dopo elemento\n"
        "4. inserisci dopo la posizione\n"
        "5. rimuovi posizione\n"
        "6. elimina testa\n"
        "7. elimina coda\n"
        "8. elimina posizione\n"
        "9. elimina lista\n"
        "10. <!> termina programma";

    bool running = true;
    while (running)
    {
        stampa(lista);
        cout << menu << endl;


        int scelta;
        cin >> scelta;

        switch (scelta)
        {
            case 1: // aggiungi in testa
            {
                int i;
                cout << "inserisci numero da aggiungere in testa alla lista: ";
                cin >> i;

                lista = aggiungi_testa(lista, i);
            }
                break;
            case 2: // aggiungi in coda
            {
                int i;
                cout << "inserisci numero da aggiungere in coda alla lista: ";
                cin >> i;

                lista = aggiungi_coda(lista, i);
            }
                break;
            case 3: // aggiungi dopo elemento
            {
                int i, j;
                cout << "inserisci numero da aggiungere alla lista: ";
                cin >> i;
                cout << "inerisco il " << i << ", dopo al elemento: ";
                cin >> j;

                lista = aggiungi_dopo(lista, i, j);
            }
                break;
            case 4: // inserisci a posizion
            {
                int i, p;
                cout << "inserisci numero da aggiungere alla lista: ";
                cin >> i;
                cout << "inerisco il " << i << ", a posizione: ";
                cin >> p;

                lista = aggiungi_a_posizione(lista, i, p);
            }
                break;
            case 5: // rimuovi posizione
                break;
            case 6: // elimina testa
                break;
            case 7: // elimina coda
                break;
            case 8: // elimina posizione
                break;
            case 9: // elimina lista
                break;
            case 10: // termina programma
                
                break;
        }
    }

    return 0;
}