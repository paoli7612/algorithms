// Ricerca ricorsiva

#include <iostream>

using namespace std;

int index(const int array[], const int key, int i, int j){
	if (j-i < 0)
		return -1;
	else {
		int k = (i+j)/2;
		if (array[k] == key)
			return k;
		else if (array[k] > key)
			j = k-1;
		else
			i = k+1;
		return index(array, key, i, j);
	}
}

int main(){
	
	int array[] = {1, 4, 6, 7, 8, 8, 9, 12, 41, 66, 99};
	
	for (int i=0; i<11; i++)
		cout << array[i] << "\t" << index(array, array[i], 0, 11) << endl;
	
	
	
	return 0;
}
