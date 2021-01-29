#include <iostream>
#include <math.h>

struct lista_t {
    int *vettore;
    int len = -1;
    int first, last;
    int el;
};

bool lista_inizializza(lista_t &lista, const int N)
{
    if (N < 0)
        return false;
    
    if (lista.len != -1)
        delete [] lista.vettore;
    
    lista.vettore = new int[N];
    lista.len = N;
    lista.first = 0;
    lista.el = 0;
    return true;
}

bool lista_aggiungi_coda(lista_t &lista, const int n)
{
    if (lista.el == lista.len)
        return false;

    lista.vettore[(lista.el+lista.first)%lista.len] = n;
    lista.el++;
    return true;
}

bool lista_aggiungi_testa(lista_t &lista, const int n)
{
    if (lista.len == lista.el-1)
        return false;

    if (lista.first == 0)
        lista.first = lista.len-1;
    else   
        lista.first--;

    lista.vettore[lista.first] = n;
    lista.el++;
    return true;
}

void lista_stampa(const lista_t &lista)
{
    cout << lista.el << "/" << lista.len << ":\t";
    for (int i=0; i<lista.el; i++)
        cout << lista.vettore[(lista.first+i)%lista.len] << " ";
    cout << endl;
}

bool lista_togli_testa(lista_t &lista)
{
    if (lista.first == lista.last)
        return false;

    if (lista.first == lista.len-1)
        lista.first = 0;
    else
        lista.first++;
    lista.el--;

    return true;
}

bool lista_togli_coda(lista_t &lista)
{
    if (lista.first == lista.last)
        return false;

    if (lista.last == 0)
        lista.last = lista.len-1;
    else
        lista.last--;
    lista.el--;

    return true;
}

void lista_scambia(lista_t &lista, int i, int j)
{
    int temp = lista.vettore[i];
    lista.vettore[i] = lista.vettore[j];
    lista.vettore[j] = temp; 
}

void lista_sort(lista_t &lista)
{
    for (int i=0; i<lista.el; i++)
        for (int j=0; j<lista.el; j++)
            if (lista.vettore[j] > lista.vettore[j+1])
                lista_scambia(lista, j, j+1);
}
