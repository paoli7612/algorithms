#include <iostream>

#include "liste.h"

using namespace std;

int main(int argc, char **argv)
{

    const char menu[] =
        "1. aggiungi in testa\n"
        "2. aggiungi in coda\n"
        "3. aggiungi dopo elemento\n"
        "4. inserisci a posizion\n"
        "5. rimuovi posizione\n"
        "6. elimina testa\n"
        "7. elimina coda\n"
        "8. elimina posizione\n"
        "9. elimina lista\n"
        "10. <!> termina programma";

    bool running = true;
    while (running)
    {
        cout << menu << endl;

        int scelta;
        cin >> scelta;

        switch (scelta)
        {
        case 1: // aggiungi in testa
            break;
        case 2: // aggiungi in coda
            break;
        case 3: // aggiungi dopo elemento
            break;
        case 4: // inserisci a posizion
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