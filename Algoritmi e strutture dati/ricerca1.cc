// Trova elemento key in array ordinato

#include <iostream>

using namespace std;

const int T = -1; // Terminatore;

int index1(const int array[], const int key){
	for (int i=0; array[i]!=T; i++)
		if (key == array[i])
			return i;
}

int index2(const int array[], const int key){
	int dim = 0;
	while (array[dim++]!=T);
	
	int j = dim/2;
	
	while (array[j] != key)
	 	if (array[j] < key)
			j += j/2;
		else
			j -= j/2;
	
	return j;
}

int main(int argc, char** argv){
	
	int array[] = {1, 4, 6, 7, 8, 8, 9, 12, 41, 66, 99, T};
	
	int key = 3;
	
	cout << index1(array, key) << endl;
	
	cout << index2(array, key) << endl;
	
	
	return 0;
}