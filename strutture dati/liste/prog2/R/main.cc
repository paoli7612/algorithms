#include <iostream>

using namespace std;

struct node_t {
    int numero;
    node_t *prossimo;
};

typedef node_t *list_t;

int head(node_t *nodo)
{
    return nodo->numero;
}

node_t *tail(node_t *nodo)
{
    return nodo->prossimo;
}

list_t insert_element(list_t list, node_t *node)
{
    
}

int main(int argc, char **argv)
{



    return 0;
}