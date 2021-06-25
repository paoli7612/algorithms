#include <iostream>
#include <fstream>

using namespace std;

struct portale_t {
	int sx, sy;
	int ex, ey;
	bool is = true;
};

int piu_vicino(portale_t *portali, const int len, int qx, int qy)
{

}

int main(int argc, char **argv)
{
	ifstream file("1.txt");
	ofstream out("1.out.txt");

	int T;
	file >> T;
	for (int i=0; i<T; i++)
	{
		int w, h; // Grandezza matrice
	 	file >> w >> h;
		int qx, qy; // Posizione qbit
		file >> qx >> qy;

		int p; // numero portali
		portale_t *portali = new portale_t[p];

		for (int j=0; j<p; j++)
		{
			file >> portali[j].sx >> portali[j].sy >> portali[j].ex >> portali[j].ey;

			cout << piu_vicino(portali, p, px, py) << endl;
			return 0;

		}

	}

	return 0;
}
