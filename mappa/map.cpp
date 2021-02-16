#include <iostream>
#include <fstream>

#include "map.h"

void map_print(const map_t &map)
{
  for (int y=0; y<20; y++)
  {
    for (int x=0; x<20; x++)
    {
      std::cout << map.tile[y][x];
    }
    std::cout << std::endl;
  }
}

void map_new(map_t &map)
{
  for (int y=0; y<20; y++)
    for (int x=0; x<20; x++)
      map.tile[y][x] = 0;
}

void map_save(const map_t &map, const char filename[])
{
  ofstream file(filename);

  file.write((char*)&map, sizeof(map_t));

  file.close();
}
