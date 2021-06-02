#include <iostream>

using namespace std;

struct node_t {
    int id;
    node_t *left, *right;
};

typedef node_t *tree_t;

node_t *new_node(int id)
{
    return new node_t {
        id,
        NULL, NULL
    };
}

void insert(tree_t tree, node_t *node)
{

}

void insert(tree_t tree, int id)
{
    insert(tree, new_node(id));
}

int main(int argc, char **argv)
{

    tree_t tree = NULL;
    for (int i=0; i<10; i++)
    {
        insert(tree, i);
    }


    return 0;
}