#include <iostream>

#include "map.h"

using namespace std;

int main(int argc, char **argv)
{
  char *name;
  if (argc != 2)
  {
    cout << "Inserisci il nome della mappa" << endl;
    name = new char[20];
    cin >> name;
  }
  else
    char *name = argv[1];

  map_t map;
  map_load(map, name);

  map_print(map, cout);

  getchar();
  getchar();

  return 0;
}
