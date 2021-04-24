
#include "liste.h"

using namespace std;

void stampa(list_t list)
{
    while (list != NULL)
    {   
        cout << list->value << " ";
        list = list->next;
    }
    cout << endl;
}

list_t aggiungi_testa(list_t list, node_t *node)
{
    node->next = list;
    return node;
}
list_t aggiungi_testa(list_t list, int value)
{
    return aggiungi_testa(list, new node_t{value, NULL});
}

list_t aggiungi_coda(list_t list, node_t *node)
{
    if (list == NULL)
        return node;
    
    list_t ap = list;
    while (ap->next != NULL)
        ap = ap->next;
    
    ap->next = node;
    return list;
}

list_t aggiungi_coda(list_t list, int value)
{
    return aggiungi_coda(list, new node_t{value, NULL});
}

list_t dealloca_testa(list_t list)
{
    if (list == NULL)
        return NULL;

    list_t ap = list->next;
    delete list;
    return ap;
}

list_t dealloca_coda(list_t list)
{
    if (list == NULL)
        return NULL;
    
    list_t ap = list;

    // scendi al penultimo elemento (fin quando il prossimo è l'ultimo)
    while (ap->next->next != NULL)
        ap = ap->next;
    
    delete ap->next;
    ap->next = NULL;

    return list;
}