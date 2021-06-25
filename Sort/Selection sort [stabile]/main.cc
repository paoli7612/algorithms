#include <iostream>

using namespace std;

void scambia(int &a, int &b)
{
    a += b;
    b = a-b;
    a = a-b;
}

void stampa(int *array, int len)
{
    for (int i=0; i<len; i++)
        cout << array[i] << " ";
    cout << endl;
}


void counting_sort_stabile(int *array, int n, int max)
{
    int *a = new int[max+1];
    for(int i=0; i<n; i++) 
        a[i] = 0;

    for(int i=0; i<n; i++)
        a[array[i]]++;

    for (int i=1; i<n; i++)
        a[i] = a[i-1] + a[i];

    int *finale = new int[n];
    for (int i=n-1; i>0; i--)
        finale[--a[array[i]]] = array[i];
    stampa(finale, n);

}


int main(int argc, char **argv)
{

    int array[] = {3, 7, 7, 2, 3, 5, 4, 0, 2, 8};
    int len = 10;
    stampa(array, len);

    counting_sort_stabile(array, 10, 8);


    return 0;
}