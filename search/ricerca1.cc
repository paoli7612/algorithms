// Trova elemento key in array ordinato

#include <iostream>

using namespace std;

const int T = -1; // Terminatore;

int index1(const int array[], const int key){
	for (int i=0; array[i]!=T; i++)
		if (key == array[i])
			return i;
	return -1;
}

int index2(const int array[], const int key){
	int dim = 0;
	while (array[dim++]!=T);
	
	int j = dim/2;
	
	int i = 0;
	int j = dim-1;	

	while (array[j] != key)
	{
	}
	return j;
}

int main(int argc, char** argv){
	
	int array[] = {1, 4, 6, 7, 8, 8, 9, 12, 41, 66, 99, T};
	
	
	for (int i=0; i<99; i++)
	{
		cout << index1(array, i) << " " << index2(array, i) << endl;
	}
	
	return 0;
}
