#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		cerr << "Inserisci il nome del file da comprimere" << endl;
		return 1;
	}

	std::vector<char> caratteri;
	std::vector<int> occorrenze;
	int quanti = 0;

	ifstream file(argv[1]);
	char c;
	while (file >> c)
	{
		int j = 0;
		for (; j<quanti; j++)
			if (c == caratteri[j])
			{
				occorrenze[j]++;
				break;
			}
		if (j == quanti)
		{
			quanti++;
			caratteri.push_back(c);
			occorrenze.push_back(1);
		}
	}

	for (int i=0; i<quanti; i++)
		cout << caratteri[i] << ": " << occorrenze[i] << endl;


	return 0;
}
