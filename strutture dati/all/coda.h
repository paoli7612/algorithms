struct coda_t {
    int *vettore;
    int lunghezza;
    int elementi;
};

void aggiungi(coda_t, int);
void stampa(const coda_t);