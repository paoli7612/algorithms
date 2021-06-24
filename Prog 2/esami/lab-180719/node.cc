#include "node.h"

void node_print(const node_t node)
{
    if (node.type == U)
        std::cout << "User: ";
    else
        std::cout << "Tweet: ";
    
    std::cout << node.content;
}