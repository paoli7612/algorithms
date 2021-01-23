struct nodo_t {
    int value;
    nodo_t *next;
};

typedef nodo_t* lista_t;

// ___ AGGIUNGI ___
void lista_aggiungi_coda(lista_t &lista, int value)
{
    if (lista == NULL)
    {
        lista = new nodo_t;
        lista->value = value;
        lista->next = NULL;
    }
    else
        lista_aggiungi_coda(lista->next, value);
}

void lista_aggiungi_testa(lista_t &lista, int value)
{
    lista_t testa = new nodo_t;
    testa->value = value;
    testa->next = lista;
    lista = testa;
}

void lista_aggiungi_prima_di(lista_t &lista, int value, nodo_t* nodo)
{
    if (lista == nodo)
    {
        nodo_t* nuovo = new nodo_t;
        nuovo->value = value;
        nuovo->next = lista->next;
        lista = nuovo;
    }
    else
        lista_aggiungi_prima_di(lista->next, value, nodo);
}

void lista_aggiungi_in_posizione(lista_t &lista, int value, int index)
{

}

// ___ Cambia ___
void lista_cambia_posizione(lista_t &lista, int i, int value, int attuale=0)
{
    if (attuale == i)
        lista->value = value;
    else
        lista_cambia_posizione(lista->next, value, i, attuale+1);
}

//void lista_cambia_valori(lista_t, int value, )

// ___ TOGLI ___
void lista_togli_nodo(lista_t &lista, nodo_t *nodo){
    if (lista != nodo)
        lista_togli_nodo(lista->next, nodo);
    else
    {
        delete lista->next;
        lista = lista->next;
    }
}

void lista_sort(lista_t lista)
{
}

// ___ Special __
void lista_stampa(lista_t &lista)
{
    if (lista == NULL)
    {        
        cout << endl;
        return;
    }
        
    cout << lista->value << "\t";
    lista_stampa(lista->next);
}

int lista_lunghezza(lista_t lista, int len=0)
{ 
    if (lista->next == NULL)
        return len+1;

    return lista_lunghezza(lista->next, len+1);
}

nodo_t* lista_nodo_posizione(lista_t lista, int i, int attuale=0)
{
    if (i == attuale)
        return lista;
    
    return lista_nodo_posizione(lista->next, i, attuale+1);
}