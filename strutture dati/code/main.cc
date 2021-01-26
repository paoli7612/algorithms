#include <iostream>

using namespace std;

//#include "coda.hpp"
#include "codalente.hpp"

int main(int argc, char** argv){

    coda_t coda;
    coda_inizializza(coda, 10);

    for (int i=0; i<5; i++)
    {
        coda_aggiungi(coda, rand()%10);
        coda_stampa(coda);
    }

    for (int i=0; i<5; i++)
    {
        coda_togli(coda);
        coda_stampa(coda);
    }

    return 0;

}