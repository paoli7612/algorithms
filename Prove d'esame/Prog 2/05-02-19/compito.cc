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

card_t *scala(list_t list, int &lunghezza)
{
    // partiamo dalla seconda carta ( in modo che ci sia una carta precedente )
    list = list->pun;

    // cicliamo fino alla penultima ( modo che ci sia una carta seguente )
    while (list->pun != NULL)
    {
        if (next(list->prev->inf, list->inf) && next(list->inf, list->pun->inf))
        {
            // ricordiamoci la prima carta della scala (da ritornare alla fine della funzione)
            card_t *card = &list->prev->inf;
            // trovata scala lunga tre ( prev, list, punt )
            // ... controlliamo se la quarta va bene
            elem_t *ap = list->pun;
            lunghezza = 3;

            while (ap->pun != NULL && next(ap->inf, ap->pun->inf))
            {
                lunghezza++;
                ap = ap->pun;
            }

            return card;
        }
        list = list->pun;
    }
    return NULL;
}

int main(int argc, char **argv)
{

    srand(time(NULL));

    const int nGiocatori = 1;
    list_t giocatori[nGiocatori];
    for (int i=0; i<nGiocatori; i++)
        giocatori[i] = NULL;
    bool random = false;

    // chiedo il numero di carte da dare ad ogni giocatore 
    int n;
    cout << "Carte per giocatore: ";
    cin >> n;

    // n carte ad ogni giocatore
    for (int i=0; i<nGiocatori; i++)
        pesca(giocatori[i], n, random);
    
    // stampa le carte dei giocatori
    for (int i=0; i<nGiocatori; i++)
        stampa(giocatori[0]);

    int len;
    card_t *card = scala(giocatori[0], len);

    if (card != NULL)
    {
        cout << "Scala trovata: ";
        print(*card);
        cout << "lunga " << len << endl;
    }

    return 0;
}