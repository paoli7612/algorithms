#include <iostream>

using namespace std;

struct NodeList {
    char filename;
    NodeList *next;
};
typedef NodeList *List;

void list_print(List list) {
    if (list == NULL) 
        cout << endl;
    else
    {
        cout << list->filename << ".txt ";
        list_print(list->next);
    }
}
void list_add(List &list, NodeList *node)
{
    if (list == NULL)
        list = node;
    else
        list_add(list->next, node);
}
void list_add(List &list, char filename)
{
    list_add(list, new NodeList{ filename, NULL });
}

int main(int argc, char **argv)
{
    List posting_list = NULL;

    list_add(posting_list, 'a');
    list_add(posting_list, 'b');
    list_add(posting_list, 'c');
    list_print(posting_list);

    return 0;
}