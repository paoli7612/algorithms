#include <iostream>
#include <cstdlib>

struct array_t {
    int *v;
    int len;
};

void array_random(array_t &, const int);
void array_print(const array_t &);
void array_delete(array_t &);