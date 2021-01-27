#include <iostream>

const int MAX_FIGLI = 2;

struct nodo_t {
    int value;
    nodo_t *next[MAX_FIGLI];
};

typedef nodo_t *albero_t;

int albero_lunghezza(albero_t &albero)
{
    if (albero == NULL)
        return 0;

    int lunghezza = 0;
    for (int i=0; i<MAX_FIGLI; i++)
        lunghezza += albero_lunghezza(albero->next[i]);
    
    if (lunghezza == 0)
        return 1;
    else
        return lunghezza;
}   

void albero_aggiungi(albero_t &albero, int value)
{
    if (albero == NULL)
    {
        albero = new nodo_t;
        albero->value = value;
        for (int i=0; i<MAX_FIGLI; i++)
            albero->next[i] = NULL;
        return;
    }

    int l_min, index = -1;
    for (int i=0; i<MAX_FIGLI; i++)
    {
        if (albero->next[i] == NULL)
        {
            albero_aggiungi(albero->next[i], value);
            return;
        }
        int lunghezza = albero_lunghezza(albero->next[i]);
        if (index == -1 || l_min > lunghezza)
        {
            l_min = lunghezza;
            index = i;
        }
    }
    // Se arriviamo a questo punto tutti i figli sono altri sotto albero 
    // ... ma il figlio index è quello con meno foglie
    albero_aggiungi(albero->next[index], value);
}

void albero_stampa(albero_t &albero, int livello=0)
{
    if (albero == NULL)
    {
        return;
    }
    for (int i=0; i<livello; i++)
        cout << "  ";

    cout << albero->value << endl;

    for (int i=0; i<MAX_FIGLI; i++)
        albero_stampa(albero->next[i], livello+1);
}
