#include "node.h"

Node *new_node(char cont[81], char tipo)
{
    Node *node;
    strcpy(node->cont, cont);
    node->tipo = tipo;
    return node;
}

void print_node(const Node &node)
{
    if (node.tipo == 'U')
        std::cout << "Utente: ";
    else
        std::cout << "Tweet: ";
    std::cout << node.cont;
}