#include <iostream>

using namespace std;

#define N 10

void print(int *array, const int start, const int end){
	for (int i=start; i<=end; i++)
    cout << array[i] << "\t";
	cout << endl;
}

void quick(int *array, int start, int mid, int end) {
  

  return;
}

void quick_sort(int a[], int start, int end) {
}

int main(void) {
  int array[N] = {3, 2, 5, 3, 6, 3, 1, 4, 9, 7};
  quick_sort(array, 0, 9);
  print(array, 0, 9);
  return(0);
}
