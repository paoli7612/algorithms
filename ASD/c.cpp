/*
    Dato un array A di n naturali, tale che A[0] < ... < A[n − 1],
    l’indice i ∈ {1, ..., n − 1} è detto un salto, se vale che A[i − 1] + 1 < A[i].

    // A è in ordine fortemente crescente
    // i è l'indice di un salto se a[i-1]+1 < a[i]

    Scrivere un algoritmo di costo computazionale O(log n) che restituisca
    -1 se l’array A non ha un salto, l’indice di un salto altrimenti.
*/
#include <iostream>

using namespace std;

int foo(int *A, int len)
{
    if ((A[len-1] - A[0]) == len-1)
        return -1;

    return len;
}

int main(int argc, char **argv)
{

    int A[] = {2, 3, 4};
    int len = 3;

    cout << foo(A, len); 

    return 0;
}