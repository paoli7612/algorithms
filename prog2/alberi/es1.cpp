#include <iostream>

#include "alberi.hpp"

int main(int argc, char **argv)
{
    tree_t tree = NULL;

    tree = nuovo_albero(tree, 3);
    stampa_albero(tree);

    return 0;
}