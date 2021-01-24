#include <iostream>

using namespace std;

#include "coda.hpp"

int main(int argc, char** argv){

    coda_t coda = NULL;
    coda_aggiungi(coda, 5);
    coda_aggiungi(coda, -3);
    coda_aggiungi(coda, 45);
    coda_aggiungi(coda, 7);
    coda_stampa(coda);

    cout << "Lunghezza: " << coda_lunghezza(coda) << endl;
    cout << "Pop e ottengo: " << coda_togli(coda) << endl;
    coda_stampa(coda);
    cout << "Lunghezza: " << coda_lunghezza(coda) << endl;


    return 0;

}