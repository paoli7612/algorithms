#include <iostream>

using namespace std;

void stampa(int *array, int len)
{
    for (int i=0; i<len; i++)
        cout << array[i] << " ";
    cout << endl;
}

void scambia(int &a, int &b)
{
    cout << "scambia " << a << " -> " << b << endl;
    a += b;
    b = a-b;
    a = a-b;
}

void foo(int *array, int len)
{
    for (int x=2; x>0; x--)
    {
        for (int i=0; i<len; i++)
        {
            if (array[i] == x)
            {
                while (array[--len] == x);
                scambia(array[i], array[len]);
            }
        }
    }
    
}
/*
```*[-]*``` Si consideri un array A di n interi, il cui valore pu`o essere solo 0, 1 o 2. Scrivere un algoritmo di costo lineare O(n) che ordini l’array ”in loco” tenendo conto che: 
- l’algoritmo pu`o SOLO scambiare elementi dell’array 
- l’algoritmo NON pu`o usare contatori o array di appoggio
*/
int main(int argc, char **argv)
{

    int array[] = {2, 2, 1, 0, 0, 0, 2, 0, 2, 1, 0, 0, 2, 1};
    int len = 14;
    stampa(array, len);

    foo(array, len);
 
    stampa(array, len);

    return 0;
}