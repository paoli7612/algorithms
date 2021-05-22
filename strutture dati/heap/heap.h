#include <iostream>

struct Heap_t {
    int *array;
    int len;
};

void heap_new(Heap_t &heap, const int len);
void heap_print(const Heap_t heap);
