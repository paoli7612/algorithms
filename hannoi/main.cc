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

void muovi(campo_t &partita, const perno_t a, const perno_t b)
{
    for (int i=partita.n_dischi-1; i>=0; i--){
        cout << partita.dischi[i] << endl;
        if (partita.dischi[i] == a)
        {
            partita.dischi[i] = b;
            break;
        }
}
}

int main(int argc, char** argv)
{
    campo_t partita;

    nuova_partita(partita, 10);

    stampa_partita(partita);

    muovi(partita, A, B);
    muovi(partita, A, C);

    stampa_partita(partita);

    return 0;
}