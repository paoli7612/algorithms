// LIFO

struct nodo_t {
    int value;
    nodo_t *next;
};

typedef nodo_t *pila_t;

void pila_stampa(pila_t pila)
{
    if (pila == NULL)
    {
        cout << endl;
        return;
    }
    
    cout << pila->value << " ";
    pila_stampa(pila->next);
}

void pila_aggiungi(pila_t &pila, int value)
{
    if (pila == NULL)
    {
        pila = new nodo_t;
        pila->value = value;
        pila->next = NULL;
    }
    else
    {
        pila_aggiungi(pila->next, value);
    }
}

void pila_togli(pila_t &pila)
{
    if (pila == NULL)
        return; // nothing to do
    else if (pila->next == NULL)
    {
        delete pila;
        pila = NULL;
    }
    else
        pila_togli(pila->next);
}

void lista_cancella_tutto(pila_t &pila)
{
    if (pila != NULL)
        lista_cancella_tutto(pila->next);
    delete pila;
    pila = NULL;
}