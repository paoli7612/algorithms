#include <iostream>

#include "lista.h"

using namespace std;

// g++ main.cc lista.cc -o main.out; ./main.out

int main(int argc, char **argv)
{
    list_t l = crea_lista(7);
    l->next->value = 4;

    stampa_lista(l);
    cout << conta(l, 4) << endl;

    return 0;
}