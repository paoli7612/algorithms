#include <iostream>

#include "coord.h"

coord_t coord_new(unsigned int x, unsigned int y)
{
  coord_t c;
  c.x = x;
  c.y = y;
  return c;
}
