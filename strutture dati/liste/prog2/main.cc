#include <iostream>

#include "lista.h"

using namespace std;

// g++ main.cc lista.cc -o main.out; ./main.out

int main(int argc, char **argv)
{
    list_t l = crea_lista(7);
    stampa_lista(l);

    l = delete_node(l, l->next->next);

    stampa_lista(l);
    return 0;
}