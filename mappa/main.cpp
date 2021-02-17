#include <iostream>
#include <fstream>

using namespace std;

#include "map.h"

int main()
{
  map_t map;

  map_new(map, coord_new(10, 10));
  map_fill(map, coord_new(0, 0), map.size, 2);

  map_save(map, "test/spawn.dat");

  map_t map2;
  map_load(map2, "test/spawn.dat");

  map_print(map, cout);
  map_print(map2, cout);

  char c;
  cin >> c;

  return 0;
}