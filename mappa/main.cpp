#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

#include "map.h"

int main()
{
  srand(time(NULL));
  int x = rand()%10;
  int y = rand()%10;

  map_t map;

  map_new(map, coord_new(10, 10));
  tile_t tile;
  tile.sprite = BLOCK;
  tile.code = -1;
  map_fill(map, coord_new(0, 0), map.size, tile);
  map_print(map, cout);
  tile.code += 5;
  map_fill(map, coord_new(x, y), coord_new(x+1, y+1), tile);
  map_save(map, "test/spawn.dat");


  cout << endl;

  map_t map2;
  map_load(map2, "test/spawn.dat");

  map_print(map2, cout);

  char c;
  cin >> c;

  return 0;
}
