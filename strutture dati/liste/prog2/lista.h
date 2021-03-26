
struct node_t {
    int value;
    node_t *next;
};

typedef node_t *list_t;

void stampa_lista(list_t);
list_t aggiungi_testa(list_t, int);
list_t crea_lista(int);

list_t cancella_nodo(list_t, node_t *);
void cancella_lista(list_t);

node_t *cerca_valore(list_t, int);