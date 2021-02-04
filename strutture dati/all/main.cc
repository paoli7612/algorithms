#include <iostream>
#include <ctime>

#include "code.h"

using namespace std;

int main(int argc, char** argv)
{
    srand(time(NULL));

    coda_t coda;

    for (int i=0; i<10; i++){
        aggiungi(coda, rand()%10);
        stampa(coda);
    }



}