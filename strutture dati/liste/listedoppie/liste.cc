
#include "liste.h"

void print_next(list_t list)
{
    if (list == NULL)
    {
        std::cout << std::endl;
        return;
    }
    
    std::cout << list->value << " ";
    print_next(list->next);
}

void print_back(list_t list)
{
    if (list == NULL)
    {
        std::cout << std::endl;
        return;
    }

    std::cout << list->value << " ";
    print_back(list->back);
}

void add_next(list_t &list, int value)
{
    if (list == NULL)
    {
        list = new node_t {value, NULL, NULL};
        return;
    }

    node_t *ap = list;
    while (ap->next != NULL)
        ap = ap->next;

    ap->next = new node_t {
        value,  // value
        ap,   // back
        NULL    // next
    };
}

void add_back(list_t &list, int value)
{
    if (list == NULL)
    {
        list = new node_t {value, NULL, NULL};
        return;
    }

    node_t *ap = list;
    while (ap->back != NULL)
        ap = ap->back;

    ap->back = new node_t {
        value,  // value
        NULL,   // back
        ap    // next
    };
}

list_t last(list_t list)
{
    if (list == NULL)
        return NULL;

    while (list->next != NULL)
        list = list->next;
    
    return list;
}

list_t first(list_t list)
{
    if (list == NULL)
        return NULL;

    while (list->back != NULL)
        list = list->back;
    
    return list;
}

void next(list_t &list)
{
    list = list->next;
}

void back(list_t &list)
{
    list = list->back;
}