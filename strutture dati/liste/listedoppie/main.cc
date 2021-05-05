
#include <iostream>

#include "liste.h"

using namespace std;

int main(int argc, char **argv)
{
    list_t lista = NULL;
    add_next(lista, 2);
    add_next(lista, 4);

    print_next(lista);

    return 0;
}