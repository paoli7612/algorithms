#include <iostream>
#include <fstream>

#include "bst.h"

using namespace std;

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

    return 0;
}