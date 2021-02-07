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

int min(tab_t &tab, const int start)
{
	int m = start;
	for (int i=start+1; i<tab.quanti; i++)
	{
		if (tab.occorrenze[i] < tab.occorrenze[m])
			m = i;
	}
	return m;
}

void swap(tab_t &tab, int i, int m)
{
	int temp = tab.occorrenze[i];
	tab.occorrenze[i] = tab.occorrenze[m];
	tab.occorrenze[m] = temp;
	char temp_c = tab.caratteri[i];
	tab.caratteri[i] = tab.caratteri[m];
	tab.caratteri[m] = temp_c;
}

void sort(tab_t &tab)
{
	for (int i=0; i<tab.quanti-1; i++)
	{
		int m = min(tab, i+1);
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

	init(tab, file);

	sort(tab);

	show(tab);


	return 0;
}
