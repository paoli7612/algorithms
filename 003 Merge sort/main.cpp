#include <stdio.h>

// merge sort

//ordinamento di array di N caratteri


#define N 10

int* merge(int r[N], int a1[N/2], int a2[N/2]){
	int l1=0, l2=0;
	for (int i=0; i<N; i++){
		if(l1==N/2){
			r[i] = a2[l2++];
			continue;
		} else if(l2 == N/2){
			r[i] = a1[l1++];
			continue;
		}
		if (a1[l1]<a2[l2]){
			r[i] = a1[l1++];
		} else {
			r[i] = a2[l2++];
		}
	}
	return r;
}

void print_array(int a[N]){
	for (int i=0; i<N; i++){
		printf(" %d ", a[i]);
	}
	printf("\n");
}

int main(){
	int array1[N/2] = {0,1,3,7,8};
	int array2[N/2] = {2,4,5,6,9};	
	int finale[N] = {0,0,0,0,0,0,0,0,0,0};		
	int* p = merge(finale, array1, array2);		
	print_array(p);					
}
