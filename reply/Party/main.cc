#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream file("1.txt");
	ofstream out("1.out.txt");
	int T;

	file >> T;
	for (int i=0; i<T; i++)
	{
		unsigned int sum = 0;

		int N;
		file >> N;

		for (int i=0; i<N; i++)
		{
			int f;
			file >> f;
			if (f > 0)
				sum += f;
		}
		out << "Case #" << i+1 << ": " << sum << endl;
	}

	return 0;
}
