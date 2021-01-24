#include <iostream>

using namespace std;

#include "albero.hpp"

int main(int argc, char** argv){

    albero_t albero = NULL;

    for (int i=0; i<10; i++)
        albero_aggiungi(albero, i);

    albero_stampa(albero);

    return 0;

}