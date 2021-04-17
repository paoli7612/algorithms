#include <iostream>

#include "sort.h"

int main(int argc, char **argv)
{
    srand(time(NULL));

    array_t array;

    array_random(array, 10);
    array_print(array);

    merge_sort(array, 0, array.len-1);
    array_print(array);
    
    array_delete(array);

    return 0;
}