#include <iostream>

using namespace std;

int main(int argc, char** argv){
	int n;
	
	cout << "Inserisci il numero sequenza caratteri da comprimere: ";
	cin >> n;
	
	char* message = new char[n];
	cin >> message;
	
	char caratteri[n];
	int ripetizioni[n];
	int num_caratteri = 0; 
	
	
	for (int i=0; i<n; i++){
		char c = message[i];
		cout << c;
		int p;
		for (p=0; p<num_caratteri; p++)
			if (caratteri[p] == c) break;
		if (p == num_caratteri){
			caratteri[p] = c;
			ripetizioni[p] = 1;
			num_caratteri++;
		} else {
			ripetizioni[p]++;
		}
		// se è gia stato salvato
			// incrementa il numero di ripetizioni
		// altrimenti
			// salvalo con ripetizioni = 0
	}
	cout << endl;
	for (int i=0; i<num_caratteri; i++){
		cout << "(" << caratteri[i] << " x " << ripetizioni[i] << ")" << endl;
	}
	return 0;
}
