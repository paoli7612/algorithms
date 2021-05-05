
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

list_t last(list_t list)
{
    if (list == NULL)
        return NULL;

    while (list->next != NULL)
        list = list->next;
    
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