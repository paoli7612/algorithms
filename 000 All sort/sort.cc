#include <iostream>

#include "sort.h"

using namespace std;

void sort(array_t &array, const sortType type)
{
    switch (type)
    {
    case INSERTION:
        insertion_sort(array);
        break;
    case SELECTION:
        selection_sort(array);
        break;
    }
}

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void merge(array_t &array, int i, int k, int j)
{
    cout << "merge " << i << " " << k << " " << j << endl;
}

void merge_sort(array_t &array, int i, int j)
{
    if (i >= j)
        return;
    
    int k = (i+j)/2;
    merge_sort(array, i, k);
    merge_sort(array, k+1, j);
    merge(array, i, k, j);

}

// DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD

void insertion_sort(array_t &array)
{
    for (int i=1; i<array.len; i++)
    {
        int key = array.v[i];
        int j = i-1;
        while (j >= 0 && array.v[j] > key)
            array.v[j+1] = array.v[j--];
            j--;
        array.v[j+1] = key;
    }   
}

void selection_sort(array_t &array)
{
	for (int j = 0; j<array.len; j++)
	{
		int p = j;

		for (int i=j+1; i<array.len; i++)
			if (array.v[i] < array.v[p])
				p = i;

        swap(array.v[j], array.v[p]);
	}
}

void merge_sort(array_t &array)
{
    merge_sort(array, 0, array.len);
}