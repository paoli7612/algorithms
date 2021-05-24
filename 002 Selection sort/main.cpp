#include <iostream>

using namespace std;

//ordinamento di array di N caratteri

#define N 10

void print_array(int a[N]){
	for (int i=0; i<N; i++){
		printf(" %d ", a[i]);
	}
	printf("\n");
}

int* selection_sortt(int a[N]){
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
}
int* selection_sort(int a[N]){
	
	for (int j=0; j<N; j++){
		system("clear");
		print_array(a);
		printf(" ");
		for (int y=0; y<j; y++)
			printf("   ");
		printf("|\n");
		int k=a[j], p=j, s;
		for (int i=j+1; i<N; i++){
			if (a[i] < k){
				k = a[i];
				p = i;
			}
		}
		printf(" ");
		for (int y=0; y<p; y++)
			printf("   ");
		printf("u\n");
		system("sleep 1");

<<<<<<< HEAD
		s = a[j];
		a[j] = k;
		a[p] = s;
	}

	return a;
}



int main(){
	int array[N] = {1,9,5,4,7,6,3,8,2,0};
	print_array(array);									//disordinato
	int* p = selection_sort(array);			//riordino
	print_array(p);											//ordinato
}
=======
void print(const int *array, const int len)
{
	for (int i = 0; i < len; i++)
		cout << array[i] << "\t";
	cout << endl;
}

int main()
{
	srand(time(NULL));

	int len = rand()%20 + 3;
	int *array = new int[len];

	array = new int[len];

	for (int i=0; i<len; i++)
		array[i] = rand()%40-20;

	cout << "len: " << len << endl;

	print(array, len);			//disordinato
	selection_sort(array, len);	//riordino
	print(array, len);			//ordinato

	return 0;
}
>>>>>>> a088dbd20005ae827e39e89db30acec2e82911df
