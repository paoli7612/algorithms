
struct elem_t {
    int inf;
    elem_t* pun ;
};

typedef elem_t* lista;

struct coda_t {
    lista head;
    elem_t* tail;
};

void init(coda_t &c)
{
    c.head = NULL;
    c.tail = NULL;
}

elem_t *nuovo_elemento(int i)
{
    return new elem_t {i, NULL}; 
}

void enqueue(coda_t &c, int i)
{
    if (c.head == NULL)
    {
        c.head = nuovo_elemento(i);
        c.tail = c.head;
        return;
    }
    else
    {
        c.tail->pun = nuovo_elemento(i);
        c.tail = c.tail->pun;
    }
}

int dequeue(coda_t &c)
{
    elem_t *ap = c.head;
    int r = ap->inf;
    c.head = c.head->pun;
    delete ap;
    return r;    
}

void stampa(const coda_t &c)
{
    elem_t *ap = c.head;
    while (ap != NULL)
    {
        cout << ap->inf << " ";
        ap = ap->pun;
    }
    cout << endl;
}