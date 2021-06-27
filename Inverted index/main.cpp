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

}

namespace words {

    struct Node {
        char word[32];
        int totale;
        Node *next;
    };
    typedef Node *List;

}

struct Inverted {
    files::List files;
    words::List words;
};

void init(Inverted &inverted)
{
    inverted.files = NULL;
    inverted.words = NULL;
}

int main(int argc, char const *argv[])
{
    Inverted inverted;
    init(inverted);
    

    return 0;
}
