/*
INPUT: due min-heap H1 e H2 di dimensione n1 e n2 rispettivamente, con n1 > n2.

OUTPUT: stampa delle chiavi che sono contenute sia in H1 che in H2
        (cioè, nell’intersezione tra le chiavi di H1 e H2).

Fornire un esempio di INPUT e OUTPUT al problema con n1, n2 > 10 e intersezione
delle chiavi NON vuota. Progettare un algoritmo che risolva il problema, utilizzando
la rappresentazione ad alto livello dell’heap (ovvero le primitive e non la rappresentazione
con array). Descrivere l’algoritmo a parole e fornire lo pseudocodice.
Spiegare perch´e l’algoritmo è corretto. Discutere il costo computazionale dell’algoritmo.
*/

#include <iostream>

using namespace std;

struct heap_t {
    int *array;
    int len;
    int dim;
};

int parent(int i)
{
    return (i/2) - 1;
}

int right_child(int i)
{
    return 2*(i+1);
} 

int left_child(int i)
{
    return 2*i + 1;
}

void init_heap(heap_t &heap, int len)
{
    heap.array = new int[len];
    heap.len = len;
    heap.dim = 0;
}

void heapify(heap_t &heap, int i)
{
    while (heap.array[parent(i)] > heap.array[i])
    {
        swap(heap.array[parent(i)], heap.array[i]);
        i = parent(i);
    }
}

void insert_key(heap_t &heap, int key)
{
    if (heap.dim == heap.len)
        throw 1;

    heap.array[heap.dim] = key;
    heapify(heap, heap.dim++);
}

void print_heap(const heap_t &heap)
{
    for (int i=0; i<heap.dim; i++)
        cout << heap.array[i] << " ";
    cout << endl;
}

int main(int argc, char **argv)
{

    heap_t heap;
    init_heap(heap, 10);
    for (int i=0; i<5; i++)
        insert_key(heap, i);
    insert_key(heap, 1);

    print_heap(heap);

    return 0;
}

