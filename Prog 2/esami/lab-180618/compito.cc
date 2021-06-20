#include <iostream>

using namespace std;

#include "carta.h"
#include "bst.h"

int chiedi_n()
{
    int n;
    cout << "n: ";
    cin >> n;
    return n;
}

int chiedi_codice()
{
    int codice;
    cout << "codice: ";
    cin >> codice;

    return codice;
}

int chiedi_punti()
{
    int punti;
    cout << "punti: ";
    cin >> punti;
    return punti;
}

carta_t chiedi_carta()
{
    carta_t carta;

    cout << "nome: ";
    cin >> carta.nome;

    cout << "cognome: ";
    cin >> &carta.nome[strlen(carta.nome)+1];

    carta.punti = chiedi_punti();

    return carta;
}

void chiedi_carte(bst &albero, const int n)
{
    for (int i=0; i<n; i++)
    {
        int codice = chiedi_codice();
       
        carta_t carta = chiedi_carta();
        bst_insert(albero, bst_newNode(codice, carta));
    }
}

void chiedi_acquisti(bst albero)
{
    char r;
    do {
        int codice = chiedi_codice();
        int punti = chiedi_punti();
        aggiorna(albero, punti, codice);
        cout << "inserire altri acquisti? (*/n): ";
    } while (r != 'n')
}

int totalePunti(bst albero, int inf, int sup)
{
    static int tot = 0;
    if (albero == NULL)
        return 0;

    if (get_key(albero) <= sup && get_key(albero) >= inf)
        tot += get_value(albero).punti;

    totalePunti(albero->left, inf, sup);
    totalePunti(albero->right, inf, sup);
    return tot;
}

void aggiorna(bst albero, int punti, int codice)
{
    bnode *node = bst_search(albero, codice);
    if (node == NULL)
        throw "nodo inesistente";
    node->inf.punti += punti;
}

int main(int argc, char **argv)
{
    bst albero = NULL;

    int n = chiedi_n();
    chiedi_carte(albero, n);

    bst_print(albero);

    cout << "i codici tra 1000 e 2000 hanno un totale di " << totalePunti(albero, 1000, 2000) << "punti" << endl; 

    chiedi_acquisti(albero);

    return 0;
}