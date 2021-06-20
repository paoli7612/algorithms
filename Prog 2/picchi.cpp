/*Un picco di una sequenza S di valori è un elemento strettamente maggiore dei suoi due
elementi contigui o maggiore dell’elemento contiguo, se l’altro manca.
Esempio: Nella sequenza [4, 3, 3, 3, 0, −1, 3, −3, 4, 2], 4, 3 e 4 sono picchi.
Data una sequenza di valori interi memorizzati in una lista doppia dichiarata sotto, si scriva la
funzione ricorsiva int picchi(lista) che restituisce il numero di picchi contenuti nella
lista.
Esempio: Sulla sequenza [4, 3, 3, 3, 0, −1, 3, −3, 4, 2] deve restituire 3.

*/

#include <iostream>

using namespace std;

struct elem_t {
    int inf;
    elem_t *next;
    elem_t *back;
};
typedef elem_t* lista_t;

elem_t *new_elem(int inf)
{
    return new elem_t {inf, NULL, NULL};
}

void add(lista_t &lista, int inf)
{
    if (lista == NULL)
        lista = new_elem(inf);
    else
    {
        elem_t *ap = lista;
        for (; ap->next!=NULL; ap=ap->next);
        ap->next = new_elem(inf);
        ap->next->back = ap;
    }    
}

void print(lista_t lista)
{
    if (lista == NULL)
    {
        cout << endl;
        return;
    }

    cout << lista->inf << " ";
    print(lista->next);
}

void print_back(lista_t lista)
{
    if (lista == NULL)
    {
        cout << endl;
        return;
    }

    cout << lista->inf << " ";
    print_back(lista->back);
}

int picchi(lista_t lista, int p=0)
{
    if (lista == NULL)
        return p;

    if (lista->back == NULL || lista->back->inf < lista->inf)
        if (lista->next == NULL || lista->next->inf < lista->inf)
            p++;

    return picchi(lista->next, p);
}

int main(int argc, char **argv)
{

    lista_t l = NULL;
   
    int arr[] = {4, 3, 3, 3, 0, -1, 3, -3, 4, 2};

    for (int i=0; i<10; i++)
        add(l, arr[i]);

    print(l);
    cout << picchi(l) << endl;

}