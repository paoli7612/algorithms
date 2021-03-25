#include <iostream>

using namespace std;

struct node_t {
    int value;
    node_t *next;
};

typedef node_t *list_t;

list_t insert_elem(list_t list, node_t *node)
{
    node->next = list;
    return node;
}

list_t crea_lista(int n)
{
    list_t lista = NULL;

    while (n--)
    {
        node_t *nodo = new node_t;
        nodo->value = n;
        lista = insert_elem(lista, nodo);
    }

    return lista;
}

void stampa_lista(list_t lista)
{   
    while (lista != NULL)
    {
        cout << lista->value << " ";
        lista = lista->next;
    }

    cout << endl;
}

int main(int argc, char **argv)
{
    int n;
    cout << "Inserisci un numero n: ";
    cin >> n;

    srand(time(NULL));
    list_t lista = crea_lista(n);
    stampa_lista(lista);

    return 0;
}