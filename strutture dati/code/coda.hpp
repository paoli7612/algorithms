// FIFO

struct node_t {
    int value;
    node_t* next;
};

typedef node_t* coda_t;

void coda_aggiungi(coda_t &coda, int value)
{
    coda_t testa = new node_t;
    testa->value = value;
    testa->next = coda;
    coda = testa;
}

void coda_stampa(coda_t &coda)
{
    if (coda == NULL)
    {
        cout << endl;
        return;
    }

    cout << coda->value << " ";
    coda_stampa(coda->next);
}

int coda_togli(coda_t &coda)
{
    coda_t nuova_coda = coda->next;
    int value = coda->value;
    delete coda;
    coda = nuova_coda;
    return value;
}

int coda_lunghezza(coda_t &coda, int lunghezza=0)
{
    if (coda == NULL)
        return lunghezza;
    else
        return coda_lunghezza(coda->next, lunghezza+1);
}

