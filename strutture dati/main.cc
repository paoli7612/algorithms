#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

#include "all.hpp"

int main(int argc, char** argv)
{
    srand(time(NULL));

    cout << time(NULL) << endl;
    coda_t coda = NULL;

    for (int i=0; i<10; i++){
        aggiungi(coda, rand()%10);
        stampa(coda);
    }



}