#include <iostream>

using namespace std;

#define N 10

void print(int *array, const int start, const int end){
	for (int i=start; i<=end; i++)
    cout << array[i] << "\t";
	cout << endl;
}

void merge(int *array, int start, int mid, int end) {
  int i, j, k=0, b[N];
  i = start;
  j = mid+1;

  while (i<=mid && j<=end) {
    if (array[i]<array[j]) {
      b[k++] = array[i++];
    } else {
      b[k++] = array[j++];
    }
  }
  while (i <= mid) 
    b[k++] = array[i++];
  
  while (j <= end) 
    b[k++] = array[j++];
  
  for (k=start; k<=end; k++)
    array[k] = b[k-start];
  
  print(array, start, mid);
  print(array, mid+1, end);

  return;
}

void merge_sort(int a[], int start, int end) {
  if (start >= end)
    return;
  int k = (start+end)/2;
  merge_sort(a, start, k);
  merge_sort(a, k+1, end);
  merge(a, start, k, end);

}

int main(void) {
  int array[N] = {3, 2, 5, 3, 6, 3, 1, 4, 9, 7};
  print(array, 0, 9);
  merge_sort(array, 0, 9);
  print(array, 0, 9);
  return(0);
}
