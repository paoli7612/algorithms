#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void leggi_riga(istream &is, char buffer[80], int maxlen=80)
{
    int i = 0;
    do is.read(&buffer[i++], 1);
    while (buffer[i] != '\n');
}

void stampa_riga(char *buffer, int maxlen=80)
{
    for (int i=0; i<maxlen && buffer[i-1]!='\n'; i++)
        cout << *(&buffer[i]);
}

int main(int argc, char const *argv[])
{
    ifstream file("file.txt");

    char buffer[80];

    leggi_riga(file, buffer);
    stampa_riga(buffer);
    
    return 0;
}
