#include "liste.h"

List_t aggiungi(List_t list, Node_t *node)
{
    if (list == NULL)
        return node;
    
    Node_t *ap = list;
    for (; ap->next!=NULL; ap=ap->next);
    ap->next = node;

    return list;
}

List_t aggiungi(List_t list, int vertice, float peso)
{
    return aggiungi(list, new Node_t {NULL,vertice,peso});
}

