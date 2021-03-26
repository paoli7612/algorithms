
struct node_t {
    int value;
    node_t *next;
};

typedef node_t *list_t;

void stampa_lista(list_t);
list_t add_head(list_t, int);
list_t crea_lista(int);