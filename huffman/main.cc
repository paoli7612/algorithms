#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct data_t {
  vector<char> chars;
  vector<int> nc;
  int index;
};

void init(data_t &data, istream &is)
{
  data.index = 0;
  char c;
  while (is >> c)
  {
    int i=0;
    for (; i<data.index; i++)
      if (data.chars[i] == c)
      {
        data.nc[i]++;
        break;
      }

    if (i == data.index)
    {
      data.nc.push_back(1);
      data.chars.push_back(c);
      data.index++;
    }
  }
}

void show(const data_t &data)
{
  for (int i=0; i<data.index; i++)
  {
    cout << data.chars[i];
    cout << ": ";
    cout << data.nc[i];
    cout << endl;
  }
}

void sort(data_t &data)
{
  for (int i=0; i<data.index; i++)
  {
    int im = max(data, i)
  }
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    cerr << "Inserisci il nome del file da comprimere" << endl;
    return 1;
  }

  char* filename = argv[1];

  ifstream file(filename);

  data_t data;

  init(data, file);

  file.close();

  sort(data);

  show(data);
  system("pause");

  return 0;
}
