#include <iostream>

#include "tree.h"

using namespace std;

int main(int argc, char **argv)
{
    //         7
    //      5     6
    //     1 2   3 4

    Tree_t t = new_node(
        7,
        NULL,
        new_node(
            5,
            new_node(
                6,
                NULL, 
                new_node(
                    3,
                    new_node (
                        4,
                        NULL,
                        NULL
                    ),
                    NULL
                )
            ), 
            new_node(
                1,
                new_node(
                    2,
                    NULL,
                    NULL
                ),
                NULL
            )
        )
    );

    cout << t->firstChild->value << endl;
    cout << t->firstChild->nextSiblings->value << endl;

    print(t, PREORDER);

    return 0;
}