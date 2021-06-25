#include <iostream>

using namespace std;

int fibo(int n, int primo=1, int secondo=1, int c=2)
{
    if (n < 2)
        return 1;

    if (c == n)
        return secondo;

    if (c == 2)
        cout << primo << endl << secondo << endl;

    int terzo = primo + secondo;
    cout << terzo << endl;
    return fibo(n, secondo, terzo, c+1);
}

int main(int argc, char **argv)
{
    cout << fibo(14);

    return 0;
}
