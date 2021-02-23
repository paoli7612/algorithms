#include <iostream>
#include <fstream>

using namespace std;

short int max(const int* a, const int len)
{
	int im = 0;
	for (int i=1; i<len; i++)
		if (a[i] > a[im])
			im = i;
	return im;
}

int main()
{
	ifstream file("1.txt");
	ofstream out("1.out.txt");

	int T;
	file >> T;
	for (int i=0; i<T; i++)
	{
		int quanti = 0;

		int N;
		file >> N;
		int *a = new int[N];
		for (int j=0; j<N; j++)
			file >> a[j];
		short int im = max(a, N);
		while (a[im] != 0)
		{
			int t = 0;

			while ((im+t) < N && a[im+t] > 0 )
			{
				a[im+t++]--;
			}

			t = 1;
			while ((im+t) >= 0 && a[im-t] > 0)
			{
				a[im-t++]--;
			}
			im = max(a, N);
			quanti++;
		}
		out << "Case #" << i+1 << ": " << quanti << endl;
	}

	out.close();

	return 0;
}
