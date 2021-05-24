#include <iostream>

using namespace std;

int min(int *array, int i, int n)
{
    int m = i;
    for (int j=i+1; j<n; j++)
    {
        if (array[m] > array[j])
            m = j;
    }
    return m;
}

void scambia(int &a, int &b)
{
    a += b;
    b = a-b;
    a = a-b;
}

void selection_sort(int *array, int i, int n)
{
    if (i < n-1)
    {
        int k = min(array, i, n);
        if (k != i)
            scambia(array[i], array[k]);
        selection_sort(array, i+1, n);
    }
}

void stampa(int *array, int len)
{
    for (int i=0; i<len; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main(int argc, char **argv)
{

    int array[] = {3, 7, 7, 2, 3, 5, 4, 0, 2, 8};
    int len = 10;

    stampa(array, len);

    selection_sort(array, 0, 10);

    stampa(array, len);

    return 0;
}