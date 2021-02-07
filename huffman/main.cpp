#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>

using namespace std;

struct tab_t {
	vector<char> caratteri;
	vector<int> occorrenze;
	int quanti;
};

struct node_t {
	char carattere;
	int n;
	node_t *left, *right;
};

void init(tab_t &tab, istream &is)
{
	char c;
	while (is >> c)
	{
		int j = 0;
		for (; j<tab.quanti; j++)
			if (c == tab.caratteri[j])
			{
				tab.occorrenze[j]++;
				break;
			}
		if (j == tab.quanti)
		{
			tab.quanti++;
			tab.caratteri.push_back(c);
			tab.occorrenze.push_back(1);
		}
	}

}

int max(tab_t &tab, const int start)
{
	int m = start;
	for (int i=start+1; i<tab.quanti; i++)
	{
		if (tab.occorrenze[i] > tab.occorrenze[m])
			m = i;
	}
	return m;
}

void swap(tab_t &tab, int i, int m)
{
	// Scambia occorrenze
	int temp = tab.occorrenze[i];
	tab.occorrenze[i] = tab.occorrenze[m];
	tab.occorrenze[m] = temp;

	// Scambia caratteri
	char temp_c = tab.caratteri[i];
	tab.caratteri[i] = tab.caratteri[m];
	tab.caratteri[m] = temp_c;
}

void sort(tab_t &tab)
{
	for (int i=0; i<tab.quanti-1; i++)
	{
		int m = max(tab, i+1);
		if (i != m)
			swap(tab, i, m);
	}
}

void show(tab_t &tab)
{
	for (int i=0; i<tab.quanti; i++)
		cout << tab.caratteri[i] << ": "<< tab.occorrenze[i] << endl;
}

int main(int argc, char** argv)
{

	if (argc != 2) // ./a.out file.txt
	{
		cerr << "Inserisci il nome del file da comprimere" << endl;
		return 1;
	}

	//	Dove salviamo i caratteri e le occorrenze
	tab_t tab;

	// apre il file prendendo il nome dal primo argomento
	char* filename = argv[1];
	ifstream file(filename);

	// carica i caratteri e il numero di occorrenze di ognuno
	init(tab, file);

	// ordine decrescente dei caratteri
	sort(tab);


	show(tab);
	for (int i=0; i<2; i++)
	{
		node_t *node = new node_t;
		node->carattere = tab.caratteri[i];
		node->n = tab.occorrenze[i];
	}
	cout << tab.occorrenze[0] << endl;


	return 0;
}
