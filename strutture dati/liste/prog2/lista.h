
struct node_t {
    int value;
    node_t *next;
};

typedef node_t *list_t;

void stampa_lista(list_t);

list_t aggiungi_testa(list_t, int);
list_t aggiungi_testa(list_t, node_t *);
list_t aggiungi_coda(list_t, int);
list_t aggiungi_coda(list_t, node_t *);

list_t crea_lista(int);
list_t crea_lista_casuale(int);

list_t cancella_nodo(list_t, node_t *);
void cancella_lista(list_t);
list_t cancella_valori(list_t, int);
list_t cancella_testa(list_t);
list_t cancella_coda(list_t);

node_t *cerca_valore(list_t, int);

int conta(list_t, int);

list_t unione(list_t, list_t);
list_t intersezione(list_t, list_t);
list_t differenza(list_t, list_t);
