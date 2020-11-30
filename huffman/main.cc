#include <iostream>
#include <string>

using namespace std;

const int MAX = 256;

struct Data {
	string message;
	int N;
	char* caratteri; // caratteri diversi
	int* ripetizioni; // numeri ripetizione degll'ennesimo carattere
	int nc; // numero caratteri diversi
};

void init(Data &d){
	cout << "Inserisci i caratteri da comprimere (no spazi)" << endl;
	cin >> d.message;
	d.N = d.message.size();
	cout << "Compressione di \"" << d.message << "\"" << endl;
	d.nc = 0;
	d.caratteri = new char[d.N];
	d.ripetizioni = new int[d.N];
}

// ritorna la posizione di c in cc, se non c'è ritorna il max
int pos(char* cc, char c, int max){
	int p;
	for (p=0; p<max; p++)
		if (cc[p] == c) break;
	return p;
}

void step1(Data &d){
	for (int i=0; i<d.N; i++){
		char c = d.message[i];
		int p = pos(d.caratteri, c, d.nc);
		
		if (p == d.nc){ // trovato nuovo carattere
			d.caratteri[p] = c;
			d.ripetizioni[p] = 1;
			d.nc++;
		} else {
			d.ripetizioni[p]++;
		}
		
			
		/*if (num_caratteri == p){
			caratteri[p] = c;
			num_caratteri++;
			ripetizioni[p] = 0;
		}*/
		
	}
}

void stampa(Data d){
	for (int i=0; i<d.nc; i++){
		if (d.caratteri[i] != ' '){
			cout << d.caratteri[i] << " x " << d.ripetizioni[i] << endl;
		}
	}
}

int main(int argc, char** argv){
	
	Data d;
	init(d);
	step1(d);
	stampa(d);
		
		
	return 0;
}
