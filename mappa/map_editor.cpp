#include <iostream>

#include "map.h"

using namespace std;

int main(int argc, char **argv)
{
  /*
    char *name;
    if (argc != 2)
    {
      cout << "Inserisci il nome della mappa" << endl;
      name = new char[20];
      cin >> name;
    }
    else
      char *name = argv[1];
  */

  map_t map;
  map_load(map, "test/spawn.dat");

  map_print(map, cout);

  coord_t start, end;
  coord_ask(start, cin);
  coord_ask(end, cin);

  map_fill(map, start, end, 12);
  map_save(map, "test/spawn.dat");

  return 0;
}
