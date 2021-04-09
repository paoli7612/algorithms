#include <iostream>
#include <cstdlib>

#include "array.h"

enum sortType { INSERTION, SELECTION, MERGE, BOGO, QUICK};

void insertion_sort(array_t &);
void selection_sort(array_t &);
void merge_sort(array_t &, int, int);

void sort(array_t &, const sortType);