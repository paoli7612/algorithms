#include <iostream>

enum type_t {U, T};

// nodo del grafo
struct node_t {
    char content[80];
    type_t type;
};

void node_print(const node_t node);
