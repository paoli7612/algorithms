#include <iostream>

using namespace std;

struct node_t {
    int value;
    node_t *next;
};

typedef node_t *list_t;

list_t aggiungi(list_t list, node_t *node)
{
    if (list == NULL)
        return node;

    if (list->value > node->value)
    {
        node->next = list;
        return node;
    }
    
    node_t *ap = list;
    while (ap->next != NULL)
    {
        if (ap->next->value > node->value)
        {
            node->next = ap->next;
            ap->next = node;
            return list;
        }
        ap = ap->next;
    }
    ap->next = node;
    node->next = NULL;

    return list;
}

void stampa(list_t list)
{
    while (list != NULL)
    {
        cout << list->value << " ";
        list = list->next;
    }
    cout << endl;
}

int main(int argc, char **argv)
{
    list_t list = NULL;
    int a = 10;
    while (a--)
    {
        node_t *node = new node_t;
        cin >> node->value;
        list = aggiungi(list, node);
        stampa(list);
    }

    return 0;
}