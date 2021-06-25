/*******************************/
/* HEADER MODULO "tipo" */
/*******************************/

#include <iostream>
#include <cstring>

struct card_t{
	char seme;
	int valore;
};
const char SEMI[] = "CQFP";

int compare(card_t, card_t);
void copy(card_t&, card_t);
void print(card_t);

int seme_int(char seme);
