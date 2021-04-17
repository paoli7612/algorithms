#include <iostream>
#include <cmath>

using namespace std;

long long int bin_to_dec(const char *bin)
{
    int bit = 0;
    for (; bin[bit]!='\0'; bit++);
    
    int sum = 0;

    for (int i=0; i<bit; i++)
        if (bin[i] == '1')
            sum += pow(2, bit-i-1);

    return sum;
}

int main(int argc, char const *argv[])
{

    if (argc != 2)
    {
        cerr << "1 argomento: [binario]" << endl;
        return 1;
    }

    const char *bin = argv[1];
    long long int dec = bin_to_dec(bin);

    cout << bin << " -> " << dec << endl;

    return 0;
}
