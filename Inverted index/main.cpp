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
    };
    typedef Node *List;

}

struct Inverted {
    files::List files;
    words::List words;
};

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
        cout << word << " ";
    }
    cout << endl;
}

void init(Inverted &inverted)
{
    inverted.files = NULL;
    inverted.words = NULL;

    add_file(inverted, "a.txt");
    add_file(inverted, "b.txt");
    add_file(inverted, "c.txt");

    files::print(inverted.files);
}

int main(int argc, char const *argv[])
{
    Inverted inverted;
    init(inverted);

    return 0;
}
