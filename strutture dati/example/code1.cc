#include <iostream>

using namespace std;

#include "../code/coda.hpp"

int main(int argc, char** argv)
{
    coda_t coda = NULL;

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

    return 0;
}