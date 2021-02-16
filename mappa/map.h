#include <iostream>
#include <fstream>

struct map_t {
  char tile[16][16];
};

void map_new(map_t &);
void map_print(const map_t &);
void map_save(const map_t &, const char *);
