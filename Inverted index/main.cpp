#include <iostream>
#include <fstream>
#include <cstring>

#define LEN 50

using namespace std;

namespace list {

    struct Node {
        char str[LEN];
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
    void add(List &list, const char str[LEN])
    {
        Node *node = new Node;
        strcpy(node->str, str);
        node->next = NULL;
        add(list, node);
    }

    Node *search(List list, const char str[LEN])
    {
        if (list == NULL)
            return NULL;

        if (strcmp(list->str, str) == 0)
            return list;
        else
            return search(list->next, str);
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

int search(Words *words, const char str[LEN])
{
    while ()
}

void add_word(Word *words, char word[LEN])
{
    cout << "add: " << word;
    int pos = search(words, word);

}

void inverted_load(Inverted &inverted, list::List file)
{
    if (file == NULL)
        return;

    char str[LEN];
    ifstream f(file->str);
    while (!f.eof()) 
    {
        f >> str;
        add_word(inverted.words, str);
    }

    inverted_load(inverted, file->next);
}

void inverted_init(Inverted &inverted)
{
    inverted.words = NULL;
    inverted.files = NULL;
    list::add(inverted.files, "a.txt");
    list::add(inverted.files, "b.txt");
    list::add(inverted.files, "c.txt");
    inverted_load(inverted, inverted.files);
}



int main(int argc, char **argv)
{
    Inverted inverted;
    inverted_init(inverted);
    print(inverted.files);
    

    return 0;
}