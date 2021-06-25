#include <iostream>
#include <cstring>

using namespace std;

struct NodeList {
    char filename[20];
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
void list_add(List &list, const char filename[20])
{
    NodeList *node = new NodeList;
    strcpy(node->filename, filename);
    node->next = NULL;
    list_add(list, node);
}

struct Word {
    char caratteri[80];
    int numero_documenti;
    List documenti;
};

struct Inverted {
    List posting_list;

};

void inverted_init(Inverted inverted)
{
    inverted.posting_list = NULL;
    list_add(inverted.posting_list, "primo");
    list_add(inverted.posting_list, "secondo");
    list_add(inverted.posting_list, "terzo");
}

int main(int argc, char **argv)
{

    

    return 0;
}