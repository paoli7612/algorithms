#include "func.hpp"

void sort_01(int array[], const int len)
{
    for (int j=1; j<len; j++)
    {
        int key = array[j];

        int i;
        for (i=j-1; i>=0 && array[i]>key; i--)
            array[i+1] = array[i];

        array[i+1] = key;
    }
}

void sort_02(int array[], const int len)
{
    for (int i=1; i<len; i++)
        for (int j=1; j<len; j++)
            if (array[j]<array[j-1])
                scambia(array[j], array[j-1]);
}