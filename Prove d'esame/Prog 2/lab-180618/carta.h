/*******************************/
/* HEADER MODULO "carta" 	   */
/*******************************/

#include <iostream>
#include <cstring>

struct carta_t {
    char nome[40];
    int punti;
};

typedef int codice_t;

int compare(carta_t,carta_t);
void copy(carta_t&,carta_t);
void print(carta_t);
