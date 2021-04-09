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

void merge_sort(array_t &array, int i, int j)
{
    if (i < j)
    {
        int k = (i+j)/2;
        array_print((array_t){&array.v[i], j-i});
        merge_sort(array, i, k);
        merge_sort(array, k+1, j);
        cout << "Merge: " << i << " " << k << " " << j << endl;

        // merge
        int *B = new int[j-i];
        int index = 0;

        int l = i;
        int r = k+1;

        while (l<=k && r <= j)
        {
            if (array.v[l] < array.v[r])
                B[index++] = array.v[l++];
            else
                B[index++] 
        }
        
    }
}