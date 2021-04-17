#include <iostream>
#include <cstring>

using namespace std;

struct node_t {
    char word[10];
    node_t *next;
};

typedef node_t *list_t;

list_t aggiungi(list_t list, node_t *node)
{
    if (list == NULL)
        return node;

    if (strcmp(list->word, node->word) > 0 )
    {
        node->next = list;
        return node;
    }
    
    node_t *ap = list;
    while (ap->next != NULL)
    {
        if (strcmp(ap->next->word, node->word) > 0)
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
        cout << list->word << " ";
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
        cin >> node->word;
        node->next = NULL;
        list = aggiungi(list, node);
        stampa(list);
    }

    return 0;
}