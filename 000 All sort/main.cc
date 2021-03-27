#include <iostream>

#include "sort.h"

int main(int argc, char **argv)
{
    array_t array;

    array_random(array, 10);
    array_print(array);
    
    array_delete(array);

    return 0;
}