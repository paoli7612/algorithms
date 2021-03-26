#include <iostream>

#include "lista.h"

using namespace std;

// g++ main.cc lista.cc -o main.out; ./main.out

int main(int argc, char **argv)
{
    list_t l = crea_lista(7);

    cout << cerca_valore(l, 4) << endl;
    cout << cerca_valore(l, 4)->value << endl;

    return 0;
}