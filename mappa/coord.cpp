#include <iostream>

#include "coord.h"

coord_t coord_new(unsigned int x, unsigned int y)
{
  coord_t c;
  c.x = x;
  c.y = y;
  return c;
}

void coord_ask(coord_t &coord, std::istream &is)
{
  is >> coord.x;
  is >> coord.y;
}
