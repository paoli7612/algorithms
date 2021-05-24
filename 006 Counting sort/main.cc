#include <iostream>

using namespace std;

void scambia(int &a, int &b)
{
    a += b;
    b = a-b;
    a = a-b;
}

void counting(int *array, int n)
{
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

    counting(array, 10);

    stampa(array, len);

    return 0;
}