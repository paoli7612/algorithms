#ifndef NODE_H_
#define NODE_H_

#include <iostream>
#include <cstring>

struct Node {
	char cont[81];
	char tipo;
};

Node *new_node(char cont[81], char tipo);
void print_node(const Node &node);

#endif // NODE_H_