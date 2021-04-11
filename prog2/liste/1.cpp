#include <iostream>

#include "liste.h"

using namespace std;

void stampa(int n){
    if(n==0)
        return;
    if (n % 2)
  	    stampa(n-1);
    else
    {
        stampa(n-1);
        cout << n <<" ";
        stampa(n-2);
        return;
    }
}

int main(int argc, char** argv)
{
    stampa(7);
    return 0;
}