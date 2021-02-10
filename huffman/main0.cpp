#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>

using namespace std;

struct character_t {
	char c;
	int o = 1;
	string code = "";
};

struct tab_t {
	vector<character_t> chars;
	int n;
};

void init(tab_t &tab, istream &is)
{
	char c;
	while (is >> c)
	{
		int i=0;
		for (; i<tab.n; i++)
			if (tab.chars[i].c == c)
				{
					tab.chars[i].o++;
					break;
				}
		if (i == tab.n)
		{
			character_t character;
			character.c = c;
			tab.chars.push_back(character);
			tab.n++;
		}
	}
}

int max(tab_t &tab, const int start)
{
	int m = start;
	for (int i=start+1; i<tab.n; i++)
	{
		if (tab.chars[i].o > tab.chars[m].o)
			m = i;
	}
	return m;
}

void swap(tab_t &tab, int i, int m)
{
	character_t temp = tab.chars[i];
	tab.chars[i] = tab.chars[m];
	tab.chars[m] = temp;
}

void sort(tab_t &tab)
{
	for (int i=0; i<tab.n-1; i++)
	{
		int m = max(tab, i+1);
		if (i != m)
			swap(tab, i, m);
	}
}

void show(const tab_t &tab)
{
	for (int i=0; i<tab.n; i++)
		cout << tab.chars[i].c << ": " << tab.chars[i].o << endl;
}

int main(int argc, char** argv)
{
	//	Dove salviamo i caratteri e le occorrenze
	tab_t tab;

	if (argc != 2) // ./a.out file.txt
	{
		cerr << "Inserisci il nome del file da comprimere" << endl;
		return 1;
	}
	char* filename = argv[1];
	
	// apre il file prendendo il nome dal primo argomento
	ifstream file(filename);

	// carica i caratteri e il numero di occorrenze di ognuno
	init(tab, file);

	// ordine decrescente dei caratteri
	sort(tab);

	// stampa
	show(tab);

	return 0;
}
