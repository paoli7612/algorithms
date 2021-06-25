/*
  Scrivere un programma per la gestione di liste doppie.
  Il programma presenta un menù all'utente che può
  - creare una list_t di n valori (volendo ordinata)
  - cancellare tutti tutti gli elementi contenente un valore dato dalla list_t
  - stampare la list_t
  - cercare valori nella list_t
  Se la list_t è ordinata la ricerca deve richiamare ord_search() altrimenti search().
*/

#include <iostream>
#include <cstring>

using namespace std ;

#include "liste.h"

/*******************************/
/* DEFINIZIONE MODULO "liste" */
/*******************************/

card_t head(list_t p){return p->inf;}

elem_t* search(list_t l, card_t v){
	while(l!=NULL)
		if(compare(head(l),v)==0)
			return l;
		else
			l=tail(l);
	return NULL;}

elem_t* ord_search(list_t l, card_t v){
		while(l!=NULL && compare(head(l),v)<=0)
			if(compare(head(l),v)==0)
				return l;
			else
				l=tail(l);
		return NULL;}

elem_t* new_elem(card_t inf){
	    elem_t* p = new elem_t ;
	    copy(p->inf,inf);
	    p->pun=p->prev=NULL;
		return p;

	}




list_t tail(list_t p){return p->pun;}
list_t prev(list_t p){return p->prev;}

list_t insert_elem(list_t l, elem_t* e){
	e->pun=l;
	if(l!=NULL)
		l->prev=e;
	e->prev=NULL;
	return e;
}

list_t delete_elem(list_t l, elem_t* e){

		if(l==e)
			l=e->pun; // e è la testa della list_t
		else // e non è la testa della list_t
			(e->prev)->pun = e->pun;
		if(e->pun!=NULL)
			(e->pun)->prev=e->prev;
		delete e;
		return l;
}


list_t ord_insert_elem(list_t l, elem_t* e){
	if(l==NULL || compare(e->inf,head(l))<0)
		return insert_elem(l,e);
	else{
		list_t l1=l;
		while (tail(l1)!=NULL && compare(head(tail(l1)),e->inf)<0)
			 l1=tail(l1);
		e->pun = l1->pun;
		if(l1->pun != NULL)
			l1->pun->prev=e;
		l1->pun = e;
		e->prev = l1;
		return l;}
}







