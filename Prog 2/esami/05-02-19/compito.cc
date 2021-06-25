#include <iostream>

#include "liste.h"

using namespace std;

void pesca(list_t &lista, bool random=false)
{
    card_t carta;
    
    if (random)
    {
        carta.valore = rand()%12+1;
        carta.seme = SEMI[rand()%4];
    }
    else
    {
        cout << "seme (C, Q, F, P): ";
        cin >> carta.seme;

        cout << "valore (1..13): ";
        cin >> carta.valore;
    }
    

    lista = ord_insert_elem(lista, new_elem(carta));
}

void pesca(list_t &list, int n, bool random)
{
    for (int i=0; i<n; i++)
        pesca(list, random);
}

void stampa(list_t list)
{
    if (list == NULL)
    {
        cout << endl;
        return;
    }

    print(list->inf);
    stampa(list->pun);
}

int main(int argc, char **argv)
{
    const int nGiocatori = 2;
    list_t giocatori[nGiocatori] = {NULL, NULL};
    bool random = true;

    // 13 carte ad ogni giocatore
    for (int i=0; i<nGiocatori; i++)
        pesca(giocatori[i], 13, random);
    
    // stampa le carte dei giocatori
    for (int i=0; i<nGiocatori; i++)
        stampa(giocatori[0]);

    return 0;
}