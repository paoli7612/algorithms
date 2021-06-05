#include <iostream>

using namespace std;

#include "../include/liste.h"
#include "../include/alberi.h"
#include "../include/grafi.h"

int main(int argc, char **argv)
{
    Albero_t albero = new NodoAlbero_t
        {1, NULL, NULL, NULL};

    alberi::stampa_preorder(albero);

    return 0;
}