#include <stdio.h>

#define N 10

void print_array(int a[N]){
	for (int i=0; i<N; i++){
		printf(" %d ", a[i]);
	}
	printf("\n");
}

void merge(int a[], int start, int mid, int end) {
  int i, j, k=0, b[N];
  i = start;
  j = mid+1;

  while (i<=mid && j<=end) {
    if (a[i]<a[j]) {
      b[k++] = a[i++];
    } else {
      b[k++] = a[j++];
    }
  }
  while (i <= mid) 
    b[k++] = a[i++];
  
  while (j <= end) 
    b[k++] = a[j++];
  
  for (k=start; k<=end; k++)
    a[k] = b[k-start];
  return;
}

void merge_sort(int a[], int start, int end) {
  int mid;
  if (start < end) {
    mid = (start+end)/2;
    merge_sort(a, start, mid);
    merge_sort(a, mid+1, end);
    merge(a, start, mid, end);
  }
  return;
}

int main(void) {
  int array[N] = {1,9,5,4,7,6,3,8,2,0};
  merge_sort(array, 0, N-1);
  print_array(array);
  return(0);
}
