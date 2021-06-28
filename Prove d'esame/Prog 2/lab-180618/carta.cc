
#include "carta.h"

int compare(carta_t a,carta_t b)
{
    return a.punti - b.punti;
}

void copy(carta_t &a,carta_t b)
{
    a = b;
}
void print(carta_t a)
{
    std::cout << a.nome << " " << &a.nome[strlen(a.nome)+1] << ": " << a.punti;
}
