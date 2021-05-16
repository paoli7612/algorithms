#include "list.h"

List_t add_head(List_t list, ListNode_t *node)
{
    node->next = list;
    return node;
}

List_t add_head(List_t list, type_t value)
{
    return add_head(list, new ListNode_t{value, NULL});
}

List_t add_tail(List_t list, ListNode_t *node)
{
    if (list == NULL)
        return node;

    ListNode_t *ap;
    for (ap=list; ap->next!=NULL; ap=ap->next);
    ap->next = node;
    
    return list;
}

List_t add_tail(List_t list, type_t value)
{
    return add_tail(list, new ListNode_t {value, NULL});
}

void print(List_t list)
{
    if (list == NULL)
    {
        std::cout << std::endl;
        return;
    }

    std::cout << list->value << " ";
    print(list->next);
}


List_t random_list_new(const int len)
{
    List_t list = NULL;
    for (int i=0; i<len; i++)
    {
        int r = rand()%10; 
        list = add_head(list, r);
    }
    return list;
}

void random_list_edit(List_t list)
{

}