
#include <iostream>

#include "liste.h"

using namespace std;

int main(int argc, char **argv)
{
    list_t primo = new node_t {0, NULL, NULL};
    add_next(primo, 2);
    add_next(primo, 4);
    add_next(primo, 6);
    list_t ultimo = last(primo);
    
    print_next(primo);
    print_back(ultimo);

    return 0;
}