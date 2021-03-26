#include <iostream>

#include "lista.h"

using namespace std;

// g++ main.cc lista.cc -o main.out; ./main.out

int main(int argc, char **argv)
{
    list_t l = new node_t{1, new node_t{2, NULL}};
    stampa_lista(l);
    return 0;
}