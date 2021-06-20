/*******************************/
/* HEADER MODULO "carta" 	   */
/*******************************/

#include <iostream>
#include <cstring>

struct carta_t {
    char nome[40];
    int punti;
};

typedef carta_t tipo_inf;

int compare(tipo_inf,tipo_inf);
void copy(tipo_inf&,tipo_inf);
void print(tipo_inf);
