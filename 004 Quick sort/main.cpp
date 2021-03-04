#include <iostream>

using namespace std;

#define N 10

void print(const int *array, const int len)
{
	for (int i = 0; i < len; i++)
		cout << array[i] << "\t";
	cout << endl;
}

void quick_sort(int *array, const int len)
{

}

int main(void) {
    srand(time(NULL));

	int len = rand()%20 + 3;
	int *array = new int[len];

	array = new int[len];

	for (int i=0; i<len; i++)
		array[i] = rand()%40-20;

	cout << "len: " << len << endl;

	print(array, len);			//disordinato
	quick_sort(array, len);	//riordino
	print(array, len);			//ordinato

	return 0;
}
