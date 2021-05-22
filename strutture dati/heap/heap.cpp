
#include "heap.h"

void heap_new(Heap_t &heap, const int len)
{
    if (len < 0)
        throw "negative len";
    
    heap.array = new int[len];
    heap.len = len;
}

void heap_print(const Heap_t heap)
{
    for (int i=0; i<heap.len; i++)
        std::cout << heap.array[i] << " ";
    std::cout << std::endl;
}
