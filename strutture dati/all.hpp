#include <iostream>

struct node_t {
    int value;
    node_t* next;
};

typedef node_t* coda_t;

void aggiungi(coda_t &coda, const int value)
{
    if (coda == NULL)
    {
        coda = new node_t;
        coda->next = NULL;
        coda->value = value;
    }
    else
        aggiungi(coda->next, value);
}

void stampa(coda_t &coda)
{
    if (coda == NULL)
    {
        cout << endl;
        return;
    }

    std::cout << coda->value << " ";

    stampa(coda->next);
}
