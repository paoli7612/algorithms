#include <iostream>

#include "list.h"

using namespace std;

int main(int argc, char **argv)
{

    List_t l = random_list_new(10);
    print(l);
    random_list_edit(l);
    print(l);
    concat(l, random_list_new(10));
    print(l);

    return 0;
}