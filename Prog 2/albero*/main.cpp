#include <iostream>

#include "tree.h"

using namespace std;

int main(int argc, char **argv)
{

    //                1
    //          2    3     4
    //        5  6  7 8  9 0 1
    //      2 3 4

    Tree_t t = new_node(
        1,
        NULL,
        new_node(
            2,
            new_node(
                3,
                new_node(4,NULL,new_node(9,new_node(0, new_node(1,NULL,NULL),NULL),NULL)),
                new_node(7, new_node(8,NULL,new_node(5, new_node(6, NULL, NULL), NULL)),NULL)
            ),
            new_node(5, new_node(6,NULL,NULL),new_node(2, new_node(3, new_node(4, NULL, NULL), NULL), NULL))
        )
    );

    cout << "preorder: ";
    print(t, PREORDER);

    print_graphic2(t);

    cout << endl;

    return 0;
}