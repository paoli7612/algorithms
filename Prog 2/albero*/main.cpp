#include <iostream>

#include "tree.h"

using namespace std;

int main(int argc, char **argv)
{
    //            7
    //      5     6    8
    //     1 2   

    Tree_t t = new_node(
        7,
        NULL,
        new_node(
            5,
            new_node(
                6,
                new_node(
                    9,
                    NULL,
                    NULL
                ), 
                NULL
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

    print(t, PREORDER);

    print_graphic(t);

    cout << endl;

    return 0;
}