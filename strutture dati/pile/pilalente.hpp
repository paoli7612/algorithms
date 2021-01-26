struct pila_t {
    int *array;
    int len = -1;
    int el;
};

bool pila_inizializza(pila_t &pila, const int N)
{
    if (N < 0)
        return false;

    if (pila.len != -1)
        delete[] pila.array;
    
    pila.array = new int[N];
    pila.len = N;
    pila.el = 0;

    return true;
}

bool pila_aggiungi(pila_t &pila, const int N)
{
    if (pila.len == pila.el)
        return false;
    
    pila.array[pila.el++] = N;

    return true;
}

bool pila_togli(pila_t &pila)
{
    if (pila.el == 0)
        return false;
    
    pila.el--;

    return true;
}

void pila_stampa(const pila_t &pila)
{
    for (int i=0; i<pila.el; i++)
        cout << pila.array[i] << " ";

    cout << endl;    
}