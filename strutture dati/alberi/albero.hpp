// FIFO
// g++ main.cc -o main.out -Wall --pedantic; ./main.out


const int MAX_FIGLI = 4;

struct nodo_t {
    int value;
    nodo_t *next[MAX_FIGLI];
};

typedef nodo_t *albero_t;

void albero_aggiungi(albero_t &albero, int value)
{
    if (albero == NULL)
    {
        albero = new nodo_t;
        albero->value = value;
        for (int i=0; i<MAX_FIGLI; i++)
            albero->next[i] = NULL;
    }
    else
    {
        for (int i=0; i<MAX_FIGLI; i++)
        {
            if (albero->next[i] == NULL)
            {
                albero_aggiungi(albero->next[i], value);
                return;
            } 
        }
        albero_aggiungi(albero->next[0], value);
    }
}

void albero_stampa(albero_t &albero, int livello=0)
{
    if (albero == NULL)
    {
        return;
    }
    cout << livello << "\t";
    cout << albero->value << endl;

    for (int i=0; i<MAX_FIGLI; i++)
        albero_stampa(albero->next[i], livello+1);
}
