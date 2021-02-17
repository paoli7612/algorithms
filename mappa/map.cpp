#include <iostream>
#include <fstream>

#include "coord.h"
#include "map.h"

 // Inizializza mappa a dimensioni size
void map_new(map_t &map, coord_t size)
{
  map.size = size;

  map.tiles = new tile_t*[map.size.y];
  for (int y=0; y<map.size.y; y++){
    map.tiles[y] = new tile_t[map.size.x];
  }
}

 // Stampa mappa sull'ostream
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

 // Salva su file
void map_save(const map_t &map, const char filename[])
{
  std::ofstream file(filename);

  file.write((char*)&map.size, sizeof(coord_t));

  for (int y=0; y<map.size.y; y++)
    for (int x=0; x<map.size.x; x++)
      file.write((char*)&(map.tiles[y][x]), sizeof(tile_t));

  file.close();
}

 // Carica da file
void map_load(map_t &map, const char filename[])
{
  std::ifstream file(filename);

  coord_t size;
  file.read((char*)&size, sizeof(coord_t));

  map_new(map, size);


  for (int y=0; y<map.size.y; y++)
    for (int x=0; x<map.size.x; x++)
      file.read((char*)&(map.tiles[y][x]), sizeof(tile_t));


}

 // riempi da un punto all'altro
void map_fill(map_t &map, const coord_t start, const coord_t end, const tile_t tile)
{
  for (int y=start.y; y<end.y; y++)
    for (int x=start.x; x<end.x; x++)
      map.tiles[y][x] = tile;
}
