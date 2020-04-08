#include <stdio.h>

// insertion sort

//ordinamento di array di N caratteri

#define N 10

int* insertion_sort(int a[N]){
	for (int j=1; j<N; j++){
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

void print_array(int a[N]){
	for (int i=0; i<N; i++){
		printf(" %d ", a[i]);
	}
	printf("\n");
}

int main(){
	int array[N] = {0,9,5,4,7,6,3,8,2,1};
	print_array(array);									//disordinato
	int* p = insertion_sort(array);			//riordino
	print_array(p);											//ordinato
}
