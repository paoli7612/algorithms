#include <iostream>

using namespace std;

void stampa(float array[], const int len)
{
    for (int i=0; i<len; i++)
        cout << array[i] << " ";
    cout << endl;
}

void counting_sort(float array[], const int len, const int max, const float step)
{
    int l_occ = max/step;

    int *occ = new int[l_occ];
    for (int i=0; i<l_occ; i++)
        occ[i] = 0;
    
    float prodotto = 1/step;

    for (int i=0; i<len; i++)
        occ[(int)(array[i]*prodotto)]++;

    int index = 0;
    for (int i=0; i<l_occ; i++)
        while (occ[i]>0)
        {
            array[index++] = i/prodotto;
            occ[i]--;

        }
}

int main(int argc, char **argv)
{
    int len = 7;
    float array[] = {1.1, 1.4, 1.6, 0.1, 0.5, 0.5, 1.9};

    stampa(array, len);
    counting_sort(array, len, 2, 0.1);
    stampa(array, len);

    return 0;
}