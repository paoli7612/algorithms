#include <iostream>

using namespace std;

struct node_t {
    int value;
    node_t *next;
};

typedef node_t *tail_t;

void stampa_coda(tail_t tail)
{
    if (tail == NULL)
        return;
    
    cout << tail->value << " ";
    stampa_coda(tail->next);
}

tail_t aggiungi(tail_t tail, int value)
 {

}