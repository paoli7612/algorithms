#include <iostream>
#include <fstream>

#include "tipo.h"

using namespace std;

parola *load(int &len)
{
    ifstream file("inverted");

    file >> len;
    parola *parole = new parola[len];

    for (int i=0; i<len; i++)
    {

        parola &p = parole[i];

        file >> p.p >> p.n_doc;

        for (int d=0; d<p.n_doc; d++)
        {
            int id;
            file >> id;
            add(p.l, id);

        }

    }

    return parole;
}

void stampa(parola *parole, const int len)
{
    for (int i=0; i<len; i++)
    {
        
    }
    
}

int main(int argc, char const *argv[])
{
    int len;
    parola *parole = load(len);
    stampa(parole, len);

    return 0;
}
