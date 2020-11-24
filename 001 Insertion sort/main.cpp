#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

// insertion sort

//ordinamento di array di N caratteri

int* insertion_sort(int *a, int n){
	for (int j=1; j<n; j++){
		int k = a[j];
		int i = j-1;
		while (i>=0 && a[i]>k){
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = k;
	}

	return a;
}

void print_array(int *a, int n){
	for (int i=0; i<n; i++){
		cout << " " << a[i] << " ";
	}
	cout << endl;
}

int main(int argc, char** argv){
	srand(time(NULL));
	int n, scelta;
	int *array;

	cout << "1) array casuale\n2) inserisci manualmente" << endl;
	cin >> scelta;
	cout << "Inserisci il numero di elementi che deve contenere l'array: ";
	cin >> n;
	array = new int[n];
	for (int i=0; i<n; i++){
		if(scelta == 1){
			array[i] = rand()%20+1;
		}	else if (scelta == 2){
			cout << "elemento " << i+1 << ": ";
			cin >> array[i];
		}
	}
	print_array(array, n);									//disordinato
	int* p = insertion_sort(array, n);			//riordino
	print_array(p, n);											//ordinato
}
