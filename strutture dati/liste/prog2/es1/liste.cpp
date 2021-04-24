
#include "liste.h"

using namespace std;

void stampa(list_t list)
{
    while (list != NULL)
    {   
        cout << list->value << " ";
        list = list->next;
    }
    cout << endl;
}