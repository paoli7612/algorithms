
struct coda_t {
    int* array;
    int len = -1;
    int index;
    int el;
};

bool coda_inizializza(coda_t &coda, const int N)
{
    if (N < 0)
        return false;

    if (coda.len != -1)
        delete [] coda.array;

    coda.array = new int[N];
    coda.len = N;
    coda.index = 0;
    coda.el = 0;

    return true;
}

bool coda_aggiungi(coda_t &coda, int value)
{
    if (coda.len == -1)
        return;

    if (coda.len == coda.el)
        return false;
    
    coda.array[(coda.el++ + coda.index) % coda.len] = value;
    return true;
}

void coda_stampa(const coda_t &coda)
{
    if (coda.len == -1)
        return;

    for (int i=0; i<coda.el; i++)
    {
        int v = coda.array[(i + coda.index)%coda.len];
        cout << v << " ";
    }
    cout << endl;
}

bool coda_togli(coda_t &coda)
{
    if (coda.len == -1)
        return false;

    if (coda.el == 0)
        return false;
    
    coda.el--;
    coda.index = (coda.index+1)%coda.len;
    return true;
}