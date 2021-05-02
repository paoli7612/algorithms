
struct node_t {
    int value;
    node_t *next;
};

typedef node_t *list_t;

void stampa_lista(list_t);
list_t crea_lista(int);
list_t crea_lista_casuale(int);
list_t aggiungi_testa(list_t, node_t);
void cancella_nodo(list_t&, node_t*);
node_t *cerca(list_t, int);
int conta(list_t, int);
int lunghezza(list_t);