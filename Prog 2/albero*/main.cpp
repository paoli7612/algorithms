#include <iostream>

#include "tree.h"

using namespace std;

int main(int argc, char **argv)
{
    //        10
    //      5    6
    //     2 3  4 5

    Tree_t t = new_node(
        10,
        NULL,
        new_node(
            5,
            new_node(
                6, NULL, NULL
            ), NULL
        )
    );

    cout << t->firstChild->value << endl;
    cout << t->firstChild->nextSiblings->value << endl;

    print(t, PREORDER);

    return 0;
}