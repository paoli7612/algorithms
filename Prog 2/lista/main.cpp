#include <iostream>

#include "list.h"

using namespace std;

int main(int argc, char **argv)
{

    List_t list = NULL;

    for (int i=0; i<10; i++)
        list = add_head(list, i);
    for (int i=0; i<10; i++)
        list = add_tail(list, i);

    print(list);

    return 0;
}