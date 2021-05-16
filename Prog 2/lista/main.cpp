#include <iostream>

#include "list.h"

using namespace std;

int main(int argc, char **argv)
{

    List_t list = random_list_new(10);
    print(list);

    ListNode_t *n = last(list);
    cout << (n->value) << endl;

    return 0;
}