#include <iostream>

struct coord_t {
  unsigned int x, y;
};

coord_t coord_new(unsigned int x, unsigned int y);
void coord_ask(coord_t &, std::istream &);
