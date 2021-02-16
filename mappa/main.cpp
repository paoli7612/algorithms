#include <iostream>
#include <fstream>

using namespace std;

#include "coord.h"
#include "map.h"

int main()
{
  map_t map;

  //map_new(map, coord_new(10, 10));
  //map_fill(map, coord_new(0, 0), map.size, 2);
  map_load(map, "test/spawn.dat");
  cout << map.size.x << " " << map.size.y << endl;
  map_print(map, cout);
  //map_save(map, "test/spawn.dat");

  char c;
  cin >> c;

  return 0;
}
