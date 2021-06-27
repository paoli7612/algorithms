#include <iostream>
#include <cstring>

using namespace std;

namespace list {

    struct Node {
        char str[50];
        Node *next;
    };

    typedef Node *List;

    void print(List list) {
        if (list == NULL) 
            cout << endl;
        else
        {
            cout << list->str << ".txt ";
            print(list->next);
        }
    }
    void add(List &list, Node *node)
    {
        if (list == NULL)
            list = node;
        else
            add(list->next, node);
    }
    void add(List &list, const char str[20])
    {
        Node *node = new Node;
        strcpy(node->str, str);
        node->next = NULL;
        add(list, node);
    }

}

struct Word {
    char caratteri[32];
    int numero_documenti;
    list::List documenti;
};

struct Inverted {
    Word *words;
    list::List files;
};

void inverted_init(Inverted &inverted)
{
    inverted.words = NULL;
    inverted.files = NULL;
    list::add(inverted.files, "primo");
    list::add(inverted.files, "secondo");
    list::add(inverted.files, "terzo");
}

void inverted_load(Inverted &inverted, list::List files)
{
    if (files == NULL)
        return;

    inverted_load(inverted, files->next);
}

int main(int argc, char **argv)
{
    Inverted inverted;
    inverted_init(inverted);
    print(inverted.files);
    

    return 0;
}