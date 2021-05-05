
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

void add_next(list_t &list, int value)
{
    if (list == NULL)
    {
        list = new node_t {value, NULL, NULL};
    }
    else if (list->next = NULL)
    {
        node_t *node = new node_t;
        node->back = list;
        node->next = NULL;
        node->value = value;
        list->next = node;
    }
    else
    {
        add_next(list->next, value);
    }
}
