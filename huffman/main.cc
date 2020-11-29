#include <iostream>

using namespace std;

const int MAX = 256;

int main(int argc, char** argv){
	char* message = new char[256];
	cout << "inserisci la parola da comprimere (usa _ per separare più sottoparole (max 256 caratteri)" << endl;
	cin >> message;
	int n = 256;
			
	char caratteri[n];
	int ripetizioni[n];
	int num_caratteri = 0; 
	
	cout << "Analizza \"" << message << "\"" << endl;
	
	for (int i=0; i<n; i++){
		char c = message[i];
		if (c == ' ') break;
		int p;
		for (p=0; p<num_caratteri; p++)
			if (caratteri[p] == c)
				break;
		if (p == num_caratteri){
			caratteri[p] = c;
			ripetizioni[p] = 1;
			num_caratteri++;
		} else {
			ripetizioni[p]++;
		}
	}
	cout << endl << "num_caratteri: " << num_caratteri << endl;

	
	// ordiniamo i vettori di "caratteri" e "ripetizioni" in base al numero di volte che il carattere si ripete
	int tot = num_caratteri-1;
	char cc[tot];
	int rr[tot];
	for (int i=0; i<tot; i++){
		cc[i] = caratteri[i];
		rr[i] = ripetizioni[i];
	}
	
	for (int i=0; i<tot; i++){
		cout << "(" << cc[i] << " x " << rr[i] << ")" << endl;
	}
	
		
	return 0;
}
