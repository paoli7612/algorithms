#include <iostream>

using namespace std;

enum perno_t {A, B, C};

struct campo_t {
    perno_t *dischi;
    unsigned int n_dischi = 0;
};

void nuova_partita(campo_t &partita, const unsigned int n_dischi)
{
    if (partita.n_dischi != 0)
        delete [] partita.dischi;
    
    partita.n_dischi = n_dischi;
    partita.dischi = new perno_t[n_dischi];
    for (int i=0; i<n_dischi; i++)
        partita.dischi[i] = A;

}

void stampa_partita(const campo_t &partita)
{
    unsigned int a=0, b=0, c=0;
    for (int i=0; i<10; i++)
    {
        if (partita.dischi[i] == A)
            a++;
        else if (partita.dischi[i] == B)
            b++;
        else
            c++;
    }
    cout << "< " << a << " - " << b << " - " << c << ">" << endl;
}

// A -> B
void muovi(campo_t &partita, const perno_t a, const perno_t b)
{
    for (int i=partita.n_dischi-1; i>=0; i--)
        if (partita.dischi[i] == a)
        {
            partita.dischi[i] = b;
            break;
        }
}

int testa_perno(const campo_t &partita, const perno_t a)
{
    int testa;
    for (testa = partita.n_dischi-1; testa >= 0; testa--)
        if (partita.dischi[testa] == a)
            break;
    return testa;
}

// A -> B
bool mossa_ammessa(campo_t &partita, const perno_t a, const perno_t b)
{
    int testa_a = testa_perno(partita, a);
    int testa_b = testa_perno(partita, b);
    
    cout << testa_a << " " << testa_b << endl;

    return testa_a > testa_b;
}

int main(int argc, char** argv)
{
    campo_t partita;

    nuova_partita(partita, 10);

    stampa_partita(partita);

    muovi(partita, A, B);
    muovi(partita, A, C);

    stampa_partita(partita);

    cout << mossa_ammessa(partita, C, A) << endl;

    return 0;
}