#include <iostream>
#include <fstream>

#include "map.h"

 // stampa
void map_print(const map_t &map, std::ostream &os)
{
  for (int y=0; y<map.size.y; y++){
    for (int x=0; x<map.size.x; x++){
      if (map.tiles[y][x] < 10)
        os << " ";
      os << map.tiles[y][x] << " ";
    }
    os << "\n";
  }
}

 // alloca spazio
void map_new(map_t &map, const coord_t size)
{
  map.size = size;

  map.tiles = new tile_t*[map.size.y];
  for (int y=0; y<map.size.y; y++){
    map.tiles[y] = new tile_t[map.size.x];
    for (int x=0; x<map.size.x; x++)
      map.tiles[y][x] = 2;
  }
}

void map_new(map_t &map, const unsigned int x, const unsigned int y)
{
  coord_t size;
  size.x = x;
  size.y = y;
  map_new(map, size);
}

 // Salva su file
void map_save(const map_t &map, const char filename[])
{
  std::ofstream file(filename);


  file.close();
}

 // Carica da file
void map_load(map_t &map, const char filename[])
{
  std::ifstream file(filename);
  
  file.close();
}
