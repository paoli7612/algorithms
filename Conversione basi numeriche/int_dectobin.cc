#include <iostream>
#include <cmath>

using namespace std;

int chartodec(const char *dec)
{
    int cifre = 0;
    for (; dec[cifre]!='\0'; cifre++);

    int decimale = 0;
    for (int i=0; i<cifre; i++)
        decimale += (dec[i] - '0') * pow(10, cifre-i-1);
    
    return decimale;
}

char* dec_to_bin(const char *dec)
{

    int decimale = chartodec(dec);
    
    int bit = 1;
    for (; pow(2, bit)<decimale; bit++);

    char* bin = new char[bit];

    for (int i=0; i<bit; i++)
    {
        bin[bit-i-1] = decimale%2 + '0';
        decimale /= 2;
    }
    return bin;
}

int main(int argc, char const *argv[])
{

    if (argc != 2)
    {
        cerr << "1 argomento: [decimale]" << endl;
        return 1;
    }

    const char *dec = argv[1];
    char* bin = dec_to_bin(dec);

    cout << dec << " -> " << bin << endl;

    return 0;
}
