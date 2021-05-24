#include <iostream>

using namespace std;

void scambia(int &a, int &b)
{
    a += b;
    b = a-b;
    a = a-b;
}

void counting_sort(int *array, int n, int max)
{
    int *a = new int[max+1];
    for(int i=0; i<n; i++) 
        a[i] = 0;

    for(int i=0; i<n; i++)
        a[array[i]]++;
    
    int index = 0;
    for (int i=0; i<n; i++)
        for (int j=0; j<a[i]; j++)
            array[index++] = i;
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

    counting_sort(array, 10, 8);

    stampa(array, len);

    return 0;
}