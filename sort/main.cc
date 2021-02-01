#include <iostream>

using namespace std;

#include "sort.hpp"


void stampa(const int array[], const int len)
{
    for (int i=0; i<len; i++)
        cout << array[i] << " ";
    cout << endl;
}

void mescola(int array[], const int len)
{
    for (int i=0; i<len; i++)
        array[i] = rand()%len;
}

int main(int argc, char** argv)
{
    const int len = 10;
    int array[len];

    cout << " - 01 insertion - " << endl; 
    mescola(array, len);
    stampa(array, len);
    sort_01(array, len);
    stampa(array, len);

    cout << " - 02 boubble - " << endl; 
    mescola(array, len);
    stampa(array, len);
    sort_02(array, len);
    stampa(array, len);

    return 0;
}