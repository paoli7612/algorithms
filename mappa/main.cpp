#include <iostream>
#include <fstream>

using namespace std;

#include "map.h"

int main()
{
  map_t map;
  map_new(map);
  map_print(map);
  map_save(map, "spawn.dat");
  getchar();


  return 0;
}
