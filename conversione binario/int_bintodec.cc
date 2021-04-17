#include <iostream>
#include <cmath>

using namespace std;

void bin_to_dec(const char *bin)
{
    int bit = 0;
    for (; bin[bit]!='\0'; bit++);
    
    int sum = 0;

    for (int i=0; i<bit; i++)
        if (bin[i] == '1')
            sum += pow(2, bit-i-1);

    cout << sum;
}

int main(int argc, char const *argv[])
{

    bin_to_dec("111111100");

    return 0;
}
