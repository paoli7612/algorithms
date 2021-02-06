#include <iostream>

using namespace std;

const int MAX_AJD = 5;

struct node_t {
    int id;
    int (*next)[MAX_AJD];
};

struct graph_t {
    node_t* head;
};


int main(int argc, char** argv)
{
    graph_t grafo;
    

    return 0;
}

