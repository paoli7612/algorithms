#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

namespace files {

    struct Node {
        char filename[16];
        Node* next;
    };
    typedef Node *List;

    void add(List &list, Node *node)
    {
        if (list == NULL)
            list = node;
        else
            add(list->next, node);
    }

    Node* search(List &list, Node *node)
    {
        if (list == NULL)
            return NULL;

        if (list == node)
            return node;
        else
            return search(list->next, node);
    }

    void print(Node *node)
    {
        if (node == NULL)
        {
            cout << endl;
            return;
        }
        cout << node->filename << " ";
        print(node->next);
    }

}

namespace words {

    typedef char Word[32];

    struct Node {
        Word word;
        int totale;
        Node *next;
        files::List files;
    };
    typedef Node *List;

    void print(List &list)
    {
        if (list == NULL)
            return;

        cout << list->word << "\t" << list->totale << "\t" << list->files->filename << endl;
        print(list->next);
    }

}

struct Inverted {
    files::List files;
    words::List words;
};

void print(Inverted &inverted)
{   
    cout << "Files: " << endl;
    files::print(inverted.files);

    cout << endl << "Words: " << endl;
    words::print(inverted.words);
}

void add_word(words::List &words, words::Word word, files::Node *file)
{
    if (words == NULL) // nuova word
    {
        words::Node *node = new words::Node;
        strcpy(node->word, word);
        node->totale = 1;
        node->files = file;
        words = node;
    }

    if (strcmp(words->word, word) == 0)
    {
        words->totale++;
        if (files::search(words->files, file) == NULL)
            files::add(words->files, file);
    }
    
    else
        add_word(words->next, word, file);
}

void add_file(Inverted &inverted, const char filename[16])
{
    files::Node *node = new files::Node;
    strcpy(node->filename, filename);
    node->next = NULL;

    // add node to files list
    if (inverted.files == NULL)
        inverted.files = node;
    else
    {
        files::Node *ap = inverted.files;
        while (ap->next != NULL)
            ap = ap->next;
        ap->next = node;
    }

    // read filename
    ifstream f(filename);
    words::Word word;

    while (!f.eof())
    {
        f >> word;
        add_word(inverted.words, word, node);
    }
}

void init(Inverted &inverted)
{
    inverted.files = NULL;
    inverted.words = NULL;

    add_file(inverted, "a.txt");
    add_file(inverted, "b.txt");
    add_file(inverted, "c.txt");

    print(inverted);
}

int main(int argc, char const *argv[])
{
    Inverted inverted;
    init(inverted);

    return 0;
}
