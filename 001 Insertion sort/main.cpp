#include <iostream>

using namespace std;

void insertion_sort(int *array, const int len){
	for (int j=1; j<len; j++){
		int k = array[j];
		int i = j-1;
		while (i>=0 && array[i]>k){
			array[i+1] = array[i];
			i--;
		}
		array[i+1] = k;
	}
}

void print(const int *a, const int len){
	for (int i=0; i<len; i++)
		cout << a[i] << "\t";
	cout << endl;
}

int main(int argc, char** argv){
	srand(time(NULL));

	int len = rand()%20 + 3;
	int *array = new int[len];


	int n, scelta;
	array = new int[n];

	for (int i=0; i<len; i++)
		array[i] = rand()%40-20;

	cout << "len: " << len << endl;

	print(array, len);									//disordinato
	insertion_sort(array, len);					//riordino
	print(array, len);											//ordinato
}
