#include <iostream>

using namespace std;

#include "../code/codalente.hpp"

int main(int argc, char** argv)
{
    srand(time(NULL));

    coda_t coda;

    coda_inizializza(coda, 10);

    int n;

    if (argc == 1)
        n = 5;
    else
        n = argv[1][0]-'0';

    for (int i=0; i<n; i++)
    {
        int value = rand()%20 - 10;
        coda_aggiungi(coda, value);
        coda_stampa(coda);
    }

    cout << endl << "Lunghezza: " << coda.el << "/" << coda.len << endl << endl;

    for (int i=0; i<n; i++)
    {
        coda_togli(coda);
        coda_stampa(coda);
    }

    return 0;
}