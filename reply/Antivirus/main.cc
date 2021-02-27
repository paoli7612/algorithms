#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int min(const int a[4])
{
	int im = 0;
	for (int i=1; i<4; i++)
		if (a[i] < a[im])
			im = i;
	return im;
}

bool trov(const char* a, const char* b, const int p, const int l)
{
	
	for (int i=0; i<strlen(b); i++)
	{
		int j;
		for (j=0; j<l; j++)
		{
			if (a[p+j] != b[i+j])
				break;
		}
		if (j == l)
			return true;
	}
	return false;
}

int index(const char *word, const char* v, const int c, const int l)
{
	for (int i=0; i<=strlen(word)-l; i++)
	{
		int k;
		for (k=0; k<l; k++)
			if (word[i+k] != v[c+k])
				break;
		if (k == l)
			return i;
	}
		
}

int main(int argc, char **argv)
{
	ifstream file("1.txt");
	ofstream out("1.out.txt");
	
	int T;
	file >> T;
	for (int i=0; i<T; i++)
	{
		int f[4];
		char *words[4];
		
		for (int j=0; j<4; j++)
		{
			file >> f[j];
			words[j] = new char[f[j]];
		}
					
		int l;
		file >> l;
		
		for (int j=0; j<4; j++)
			file >> words[j];
		
		int im = min(f);
		int c;
		for (c=0; c<=f[im]-l; c++)
		{
			int r;
			for (r=1; r<4; r++)
				if (!trov(words[im], words[(im+r)%4], c, l))
					break;
				
			if (r == 4)
				break;
		}
		out << "Case #" << i+1 << ":";
		for (int j=0; j<4; j++)
			out << " " << index(words[j], words[im], c, l);
		out << " " <<endl;
		delete [] words;
	}
	
	return 0;
}
