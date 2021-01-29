struct lista_t {
    int *vettore;
    int len = -1;
    int start, end;
};

bool lista_inizializza(lista_t &lista, const int N)
{
    if (N < 0)
        return false;
    
    if (lista.len != -1)
        delete [] lista.vettore;
    
    lista.vettore = new int[N];
    lista.len = N;
    lista.start = 0;
    lista.end = 0;
    return true;
}

int lista_lunghezza(lista_t lista)
{
    return (lista.end - lista.start)%lista.len;
}

bool lista_aggiungi_coda(lista_t &lista, const int n)
{
    if (lista.start == (lista.end + 1)%lista.len)
        return false;
    return true;
}
