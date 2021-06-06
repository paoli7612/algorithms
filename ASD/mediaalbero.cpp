/*Si consideri il seguente problema:
INPUT: un albero binario T realizzato con nodi e puntatori. I campi di ogni nodo dell’albero sono: lef t puntatore al
figlio sinistro, right puntatore al figlio destro, key che memorizza un numero naturale.
OUTPUT: per ogni nodo u dell’albero, stampare la media dei valori contenuti nei nodi del sottoalbero radicato in u
(radice compresa)
Fornire un esempio di input e output del problema con un albero T di altezza almeno tre.
Fornire lo pseudo-codice di un algoritmo che utilizzi la ricorsione ma che NON usi variabili globali all’interno delle
chiamate ricorsive.
Studiare il costo computazionale dell’algoritmo proposto.
*/

#include <iostream>

using namespace std;

struct node_t {
    int value;
    node_t *left, *right;
};

typedef node_t *tree_t;

node_t *n(int value, node_t *left=NULL, node_t *right=NULL)
{
    return new node_t {value, left, right};
}

float media(tree_t tree, int &somma, int &n)
{
    if (tree == NULL)
        return 0;

    n++;
    somma += tree->value;

    media(tree->left, somma, n);
    media(tree->right, somma, n);

    return ((float)somma)/n;
}

int main(int argc, char **argv)
{

    tree_t tree = n(1, n(2, n(4), n(5)), n(3, n(6), n(7)));
    int s=0, n=0;
    cout << media(tree, s, n);

    return 0;
}