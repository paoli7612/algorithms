#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    int b;
    if (argc > 1)
        b = argv[1][0] - '0';
    else
        cin >> b;


    int rows = pow(2, b);
    for (int i=0; i<rows; i++)
    {
        cout << i << ":\t";
        for (int j=b-1; j>=0; j--)
            cout << ((i>>j)&1);
        cout << endl;
    }
        


    return 0;
}