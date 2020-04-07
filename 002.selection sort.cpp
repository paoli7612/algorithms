#include <stdio.h>

// selection sort

//ordinamento di array di N caratteri

#define N 10

int* selection_sort(int a[N]){
	for (int j=0; j<N; j++){
		int k=a[j], p=j, s;
		for (int i=j+1; i<N; i++){
			if (a[i] < k){
				k = a[i];
				p = i;
			}
		}
		s = a[j];
		a[j] = k;
		a[p] = s;
	}
	
	return a;
}

void print_array(int a[N]){
	for (int i=0; i<N; i++){
		printf("%d -> [%d]\n", i, a[i]);
	}
	printf("___\n");
}

int main(){
	int array[N] = {0,9,5,4,7,6,3,8,2,1};
	print_array(array);						//disordinato
	int* p = selection_sort(array);			//riordino
	print_array(p);							//ordinato
}
