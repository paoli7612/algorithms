#include <iostream>

using namespace std;

struct node_t {
    int value;
    node_t *next;
};

typedef node_t *list_t;

list_t aggiungi(list_t list, node_t *node)
{


}

void stampa(list_t list)
{
    while (list != NULL)
    {
        cout << list->value << " ";
        list = list->next;
    }
    cout << endl;
}

int main(int argc, char **argv)
{

    return 0;
}