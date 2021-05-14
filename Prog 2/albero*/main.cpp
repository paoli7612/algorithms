#include <iostream>

#include "tree.h"

using namespace std;

int main(int argc, char **argv)
{
    Tree_t t = new_node(12, NULL,
        new_node(12, NULL, NULL));

    print(t, PREORDER);

    return 0;
}