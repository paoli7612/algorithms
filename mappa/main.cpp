#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

#include "map.h"

const int WIDTH = 50, HEIGHT = 50;

int main()
{
  srand(time(NULL));
  int x = rand()%10;
  int y = rand()%10;

  map_t map;

  map_new(map, coord_new(WIDTH, HEIGHT));
  tile_t tile;
  tile.sprite = BLOCK;
  tile.code = 0;
  map_fill(map, coord_new(0, 0), map.size, tile);
  tile.code = -1;
  map_fill(map, coord_new(0, 0), coord_new(1, HEIGHT), tile);
  map_fill(map, coord_new(0, 0), coord_new(WIDTH, 1), tile);
  map_fill(map, coord_new(WIDTH-1, 0), coord_new(WIDTH, HEIGHT), tile);
  map_fill(map, coord_new(0, HEIGHT-1), coord_new(WIDTH, HEIGHT), tile);
  map_print(map, cout);
  map_save(map, "test/spawn.dat");

  return 0;
}
