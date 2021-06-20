#include "carta.h"

int compare(tipo_inf a, tipo_inf b)
{
    return strcmp(a.nome, b.nome);
}

void copy(tipo_inf &a, tipo_inf b)
{
    strcpy(a.nome, b.nome);
    strcpy(&a.nome[strlen(a.nome)+1], &b.nome[strlen(b.nome)+1]);
    a.punti = b.punti;
}

void print(tipo_inf a)
{
    std::cout << a.nome << " " << &a.nome[strlen(a.nome)+1] << " -> " << a.punti;
}
