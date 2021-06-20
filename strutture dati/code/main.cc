#include <iostream>

using namespace std;

#include "coda.hpp"
//#include "codalente.hpp"

int main(int argc, char** argv){


    coda_t c;
    init(c);

    for (int i=0; i<5; i++)
    {
        enqueue(c, i);
        stampa(c);
    }


    for (int i=0; i<5; i++)
    {
        cout << dequeue(c) << endl;
        stampa(c);
    }


    return 0;

}