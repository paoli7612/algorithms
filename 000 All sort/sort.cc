#include <iostream>

#include "sort.h"

using namespace std;

void array_random(array_t &array, const int len)
{
    array.len = len;
    array.v = new int[len];

    for (int i=0; i<len; i++)
        array.v[i] = rand()%10;
}

void array_print(const array_t &array)
{
    for (int i=0; i<array.len; i++)
        cout << array.v[i] << " ";
    cout << endl;
}

void array_delete(array_t &array)
{
    delete [] array.v;
}