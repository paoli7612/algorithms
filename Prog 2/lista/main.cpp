#include <iostream>

#include "list.h"

using namespace std;

int main(int argc, char **argv)
{

    List_t l1 = random_list_new(10);
    List_t l2 = random_list_new(10);
    print(l1);
    print(l2);

    concat(l1, l2);
    print(l1);

    return 0;
}