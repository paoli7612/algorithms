#include <iostream>
#include <fstream>

#include "bst.h"

using namespace std;

// punto 2
int totalePunti(bst albero, codice_t min, codice_t max)
{
    if (albero == NULL)
        return 0;
    
    int l = totalePunti(albero->left, min, max);
    int r = totalePunti(albero->right, min, max);
    int p = 0;

    codice_t &codice = albero->key;
    if (codice >= min && codice <= max)
        p = albero->inf.punti;

    return l+r+p;
}

void aggiorna(bst albero, codice_t codice, int punti)
{
    bnode *node = bst_search(albero, codice);

    if (node == NULL)
    {   
        // throw "carta non presente nel bst"
        cerr << "[!] Carta non presente nel bst" << endl;
        return;
    }   

    node->inf.punti += punti;
}

void chiedi_carta(bst &albero, istream &is)
{
    carta_t carta;
    codice_t codice;

    cout << "codice: ";
    is >> codice;

    cout << "nome: ";
    is >> carta.nome;
    
    cout << "cognome: ";
    is >> &carta.nome[strlen(carta.nome)+1];

    cout << "punti: ";
    is >> carta.punti;

    bst_insert(albero, codice, carta);
    cout << endl;
}

void chiedi_acquisto(bst &albero, istream &is)
{
    int punti;
    codice_t codice;

    cout << "codice carta: ";
    is >> codice;

    cout << "punti accumulati con l'acquisto: ";
    is >> punti;

    aggiorna(albero, codice, punti);
    cout << endl;
}

// punto 3
void chiedi_acquisti(bst albero, istream &is)
{
    int m;
    cout << "numero acquisti: ";
    is >> m;

    for (int i=0; i<m; i++)
    {
        chiedi_acquisto(albero, is);
    }
}

int main(int argc, char **argv)
{
    bst albero;

    int n = 4;
    cout << "codice di carte: ";
    //cin >> n;
    cout << n;

    ifstream file("in");
    file >> n;

    for (int i=0; i<n; i++)
        chiedi_carta(albero, file);

    cout << endl;
    print_inorder(albero);

    int min, max;
    cout << "min: ";
    file >> min;
    cout << "max: ";
    file >> max;

    cout << "totale punti: " << totalePunti(albero, min, max);

    chiedi_acquisti(albero, file);
    
    print_inorder(albero);


    return 0;
}