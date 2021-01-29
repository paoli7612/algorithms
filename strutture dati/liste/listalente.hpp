#include <iostream>

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
    if (lista.len == lista_lunghezza(lista)-1)
        return false;

    lista.vettore[(lista.end++)%lista.len] = n;
    return true;
}

bool lista_aggiungi_testa(lista_t &lista, const int n)
{
    if (lista.len == lista_lunghezza(lista)-1)
        return false;

    lista.vettore[(--lista.start)%lista.len] = n;
    return true;
}

void lista_stampa(const lista_t &lista)
{
    for (int i=0; i<lista_lunghezza(lista); i++)
        cout << lista.vettore[(lista.start+i)%lista.len] << " ";
    cout << endl;
}
