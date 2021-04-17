#include <iostream>

using namespace std;

void print(const int *array, const int start, const int len)
{
	for (int i = start; i < start+len; i++)
		cout << array[i] << "\t";
	cout << endl;
}

int media(const int *array, const int start, const int len)
{
    int sum = 0;
    for (int i=start; i<start+len; i++)
        sum += array[i];
    return sum/len;
}

void scambia(int &a, int &b)
{
    cout << a << " -> " << b << endl;
    int t = a;
    a = b;
    b = t;
}

void avreage_sort(int *array, const int start, const int len)
{
    if (len <= 1)
        return;
    else if (len == 2)
    {
        if (array[start] > array[start+1])
            scambia(array[start], array[start+1]);
        
        return;
    }

    print(array, start, len);
    
    int m = media(array, start, len);
    int e = start+len-1;
    int c = 1;

    for (int i=start; i<=e; i++)
    {
        if (array[i] > m)
        {
            while (array[e] > m)
                e--;
            scambia(array[i], array[e--]);
        }
        c++;
    }

    cout << "start: " << start << "\t len: " << len << "\t c: " << c << "\tm: " << m << endl;
    avreage_sort(array, start, c);
    avreage_sort(array, c, len-c-1);
}

int main(int argc, char **argv)
{
    int array[] = {9, 6, 5, 1, 8, 3, 3, 4, 5, 6};
    const int len = 10;

    avreage_sort(array, 0, len);
    print(array, 0, len);

    return 0;
}