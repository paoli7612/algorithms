#include <iostream>

using namespace std;

#include "heap.h"

int main(int argc, char **argv)
{

    Heap_t heap;
    heap_new(heap, 10);
    heap_print(heap);
    return 0;    

}