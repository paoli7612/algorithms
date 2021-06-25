/*******************************/
/* HEADER MODULO "tipo" */
/*******************************/

struct card_t{
	char seme;
	int valore;
};

int compare(card_t, card_t);
void copy(card_t&, card_t);
void print(card_t);
