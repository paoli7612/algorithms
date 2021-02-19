#include <iostream>

#include "coord.h"

enum sprite_t { NPC, CHEST, BLOCK, DOOR, TORCH, SIGNAL };
typedef unsigned short short int code_t;

struct tile_t {
  sprite_t sprite;
  code_t code;
};

struct map_t {
  coord_t size;
  tile_t **tiles;
};

void map_new(map_t &, coord_t);
void map_print(const map_t &, std::ostream &);

void map_save(const map_t &, const char *);
void map_load(map_t &, const char *);

void map_fill(map_t &, const coord_t, const coord_t, const tile_t);
