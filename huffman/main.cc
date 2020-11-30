#include <iostream>
#include <string>

using namespace std;

const int MAX = 256;

int main(int argc, char** argv){
	string message;
	cout << "inserisci la parola da comprimere (usa _ per separare più sottoparole (max 256 caratteri)" << endl;
	cin >> message;
	int n = message.length();
			
	char caratteri[n];
	int ripetizioni[n];
	int num_caratteri = 0; 
	
	cout << "Compressione di \"" << message << "\"" << endl;
	
	for (int i=0; i<message.size(); i++){
		char c = message[i];
		cout << c << endl;
		int p;
		
		for (p=0; p<num_caratteri; p++)
			if (caratteri[p] == c) break;
			
		if (num_caratteri == p){
			caratteri[p] = c;
			num_caratteri++;
			ripetizioni[p] = 0;
		}
		
		ripetizioni[p]++;
	}
	
	for (int i=0; i<num_caratteri; i++){
		cout << "(" << caratteri[i] << " x " << ripetizioni[i] << ")" << endl;
	}
	
		
	return 0;
}
