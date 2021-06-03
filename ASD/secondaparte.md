1. Si consideri il seguente problema:
    INPUT: due min-heap H1 e H2 di dimensione n1 e n2 rispettivamente, con n1 > n2.
    OUTPUT: stampa delle chiavi che sono contenute sia in H1 che in H2 (cio`e, nell’intersezione tra le chiavi di H1 e
    H2).
    Fornire un esempio di INPUT e OUTPUT al problema con n1, n2 > 10 e intersezione delle chiavi NON vuota.
    Progettare un algoritmo che risolva il problema, utilizzando la rappresentazione ad alto livello dell’heap (ovvero le
    primitive e non la rappresentazione con array). Descrivere l’algoritmo a parole e fornire lo pseudocodice.
    Spiegare perch´e l’algoritmo `e corretto.
    Discutere il costo computazionale dell’algoritmo.
2. Si consideri un array A di n interi, il cui valore pu`o essere solo 0, 1 o 2.
    Scrivere un algoritmo di costo lineare O(n)
    che ordini l’array ”in loco” tenendo conto che:
    1. l’algoritmo pu`o SOLO scambiare elementi dell’array
    2. l’algoritmo NON pu`o usare contatori o array di appoggio

1. Si consideri il seguente problema:
    INPUT: un albero binario T realizzato con nodi e puntatori e il puntatore p ad un nodo dell’albero. I campi di
    ogni nodo dell’albero sono: lef t puntatore al figlio destro, right puntatore al figlio sinistro, key con identificativo
    ID del nodo.
    OUTPUT: stampa di tutti gli ID dei nodi che sono antenati di p in T seguiti dal messaggio ”non ci sono altri
    antenati”, oppure il messaggio ”non ci sono antenati” nel caso in cui non ce ne siano.
    Fornire lo pseudo-codice di algoritmo che sfrutta la ricorsione per risolvere il problema. Studiare il costo computazionale dell’algoritmo proposto. Fornire un esempio con un albero T di altezza almeno due mostrando l’ordine
    delle chiamate ricorsive e il ritorno dalle chiamata.
2. Si consideri il seguente problema:
    INPUT: un array A di n caratteri, una costante intera dispari k ∈ O(1) tale che k ≤ n.
    OUTPUT: VERO se esiste una sequenza di caratteri palindroma in A, di lunghezza con almeno k caratteri (si ricorda che una sequenza `e palindroma se si pu`o leggere indifferentemente da sinistra a desta o da destra a sinistra), FALSO altrimenti.
    Spiegare brevemente a parole il funzionamento dell’algoritmo e fornire lo presudo-codice. Studiare il costo computazionale dell’algoritmo proposto.

1. Si consideri il seguente problema:
    INPUT: A un array di n valori reali e x un valore reale.
    OUTPUT: VERO se esistono due elementi del array la cui somma `e x, FALSO altrimenti.
    Scrivere un algoritmo per il problema di costo O(n log n). Spiegare il suo funzionamento brevemente a parole e
    fornire lo pseudo-codice.
2. Si consideri il seguente problema:
    INPUT: Grafo diretto G = (V, E), per cui abbiamo V = {1, . . . , n}, un nodo v ∈ V e un valore intero 0 < k < n.
    OUTPUT: stampare tutti gli identificativi dei nodi a distanza esattamente k da v.
    Rappresentazione del grafo a scelta. Costo computazionale.