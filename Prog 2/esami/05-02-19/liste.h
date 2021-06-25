/*******************************/
/* HEADER MODULO "liste" */
/*******************************/
#include "tipo.h"

struct elem_t
{
       card_t inf;
       elem_t* pun ;
       elem_t* prev;
} ;

typedef elem_t* list_t ;
	
list_t tail(list_t);
list_t prev(list_t);
list_t insert_elem(list_t, elem_t*);
list_t delete_elem(list_t, elem_t*);
list_t ord_insert_elem(list_t, elem_t*);

card_t head(list_t);
elem_t* ord_search(list_t, card_t);
elem_t* new_elem(card_t);
elem_t* search(list_t, card_t);
