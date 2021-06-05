/*

INPUT un array A di n caratteri, una costante intera dispari k ∈ O(1) tale che k ≤ n.

OUTPUT VERO se esiste una sequenza di caratteri palindroma in A,
di lunghezza con almeno k caratteri (si ricorda che una sequenza è palindroma se
si pu`o leggere indifferentemente da sinistra a desta o da destra a sinistra), FALSO altrimenti.

Spiegare brevemente a parole il funzionamento dell’algoritmo e fornire lo
presudo-codice. Studiare il costo computazionale dell’algoritmo proposto.
*/

#include <iostream>

using namespace std;

bool fun(char *stringa, int len, int k)
{
    for (int i=0; i<len-k+1; i++)
    {
        
        }
}

int main(int argc, char **argv)
{

    const int len = 8;
    char stringa[len] = "ABJBAHUH";

    const int k = 3;

    fun(stringa, len, k)

    return 0;
}
