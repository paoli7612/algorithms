#include <iostream>

using namespace std;

enum perno_t {A, B, C};

struct campo_t {
    perno_t *dischi;
    unsigned int n_dischi = 0;
    unsigned long int mosse = 0;
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
    for (int i=0; i<partita.n_dischi; i++)
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
    
    return testa_a > testa_b;
}

// A -> B
bool muovi(campo_t &partita, const perno_t a, const perno_t b)
{
    if (!mossa_ammessa(partita, a, b))
        return false;

    for (int i=partita.n_dischi-1; i>=0; i--)
        if (partita.dischi[i] == a)
        {
            partita.dischi[i] = b;
            break;
        }

    partita.mosse++;
    return true;
}

void hanoi(campo_t &partita, perno_t part, perno_t dest, perno_t appo, int quanti)
{
    cout << "hanoi <" << part << " -> " << dest << ">" <<endl;
    if (quanti == 1)
        muovi(partita, part, dest);
    else
    {
        hanoi(partita, part, appo, dest, quanti-1);
        muovi(partita, part, dest);
        hanoi(partita, appo, dest, part, quanti-1);
    }
    
}

int main(int argc, char** argv)
{
    const int N_DISCHI = 8;
    campo_t partita;

    nuova_partita(partita, N_DISCHI);

    stampa_partita(partita);

    hanoi(partita, A, B, C, N_DISCHI);

    stampa_partita(partita);

    cout << partita.mosse << " Mosse" << endl;

    return 0;
}