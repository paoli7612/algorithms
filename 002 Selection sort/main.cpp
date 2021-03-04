#include <iostream>

using namespace std;

void selection_sort(int *a, const int len)
{
	for (int j = 0; j < len; j++)
	{
		int k = a[j], p = j, s;
		for (int i = j + 1; i < len; i++)
		{
			if (a[i] < k)
			{
				k = a[i];
				p = i;
			}
		}
		s = a[j];
		a[j] = k;
		a[p] = s;
	}
}

void print(const int *array, const int len)
{
	for (int i = 0; i < len; i++)
		cout << array[i] << "\t";
	cout << endl;
}

int main()
{
	srand(time(NULL));

	int len = rand()%20 + 3;
	int *array = new int[len];

	array = new int[len];

	for (int i=0; i<len; i++)
		array[i] = rand()%40-20;

	cout << "len: " << len << endl;

	print(array, len);			//disordinato
	selection_sort(array, len);	//riordino
	print(array, len);			//ordinato
}