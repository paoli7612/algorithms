#include <iostream>

using namespace std;

const int MAX = 256;

int main(int argc, char** argv){
	char* message = new char[256];
	cout << "inserisci la parola da comprimere (usa _ per separare più sottoparole (max 256 caratteri)" << endl;
	cin >> message;
	int n = 256;
	//cout << "Inserisci il numero sequenza caratteri da comprimere: ";
	//cin >> n;
	
	//char* message = new char[n];
	//cin >> message;
		
	char caratteri[n];
	int ripetizioni[n];
	int num_caratteri = 0; 
	
	cout << "Analizza \"" << message << "\"" << endl;
	
	for (int i=0; i<n; i++){
		char c = message[i];
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
	}
	cout << endl;
	for (int i=0; i<num_caratteri; i++){
		cout << "(" << caratteri[i] << " x " << ripetizioni[i] << ")" << endl;
	}
	return 0;
}
