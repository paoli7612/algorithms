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
		// se è gia stato salvato
			// incrementa il numero di ripetizioni
		// altrimenti
			// salvalo con ripetizioni = 0
	}
	return 0;
}
