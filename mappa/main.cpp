#include <iostream>
#include <fstream>

using namespace std;

#include "map.h"

int main()
{
  map_t map;

  map_new(map, 30, 20);
  map_print(map, cout);
  map_save(map, "spawn.dat");

  char i;
  cin >> i;

  return 0;
}
