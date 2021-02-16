struct coord_t {
  unsigned int x, y;
};

typedef short int tile_t;

struct map_t {
  coord_t size;
  tile_t **tiles;
};

void map_new(map_t &, const coord_t);
void map_new(map_t &, const unsigned int, const unsigned int);

void map_print(const map_t &, std::ostream &);

void map_save(const map_t &, const char *);
void map_load(map_t &, const char *);
