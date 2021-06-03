

```*[-]*``` Si consideri il seguente problema
```*INPUT*```: un albero binario T realizzato con nodi e puntatori e il  puntatore p ad un nodo dell’albero. I campi di ogni nodo dell’albero sono: lef t puntatore al figlio destro, right puntatore al figlio sinistro, key con identificativo ID del nodo.
```*OUTPUT*```: stampa di tutti gli ID dei nodi che sono antenati di p in T seguiti dal messaggio ”non ci sono altri antenati”, oppure il messaggio ”non ci sono antenati” nel casoin cui non ce ne siano.
Fornire lo pseudo-codice di algoritmo che sfrutta la ricorsione per risolvere il problema. Studiare il costo computazionale dell’algoritmo proposto. Fornire un esempio con un albero T di altezza almeno due mostrando l’ordine delle chiamate ricorsive e il ritorno dalle chiamata.

```*[-]*``` Si consideri il seguente problema:
```*INPUT*```: un array A di n caratteri, una costante intera dispari k ∈ O(1) tale che k ≤ n.
```*OUTPUT*```: VERO se esiste una sequenza di caratteri palindroma in A, di lunghezza con almeno k caratteri (si ricorda che una sequenza è palindroma se si pu`o leggere indifferentemente da sinistra a desta o da destra a sinistra), FALSO altrimenti.
Spiegare brevemente a parole il funzionamento dell’algoritmo e fornire lo presudo-codice. Studiare il costo computazionale dell’algoritmo proposto.

```*[-]*``` Si consideri il seguente problema:
```*INPUT*```: A un array di n valori reali e x un valore reale.
```*OUTPUT*```: VERO se esistono due elementi del array la cui somma è x, FALSO altrimenti.
Scrivere un algoritmo per il problema di costo O(n log n). Spiegare il suo funzionamento brevemente a parole e fornire lo pseudo-codice.

```*[-]*``` Si consideri il seguente problema:
```*INPUT*```: Grafo diretto G = (V, E), per cui abbiamo V = {1, . . . , n}, un nodo v ∈ V e un valore intero 0 < k < n.
```*OUTPUT*```: stampare tutti gli identificativi dei nodi a distanza esattamente k da v.
Rappresentazione del grafo a scelta. Costo computazionale.

```*[-]*``` Dato un array A di n naturali, tale che A[0] < ... < A[n − 1], l’indice i ∈ {1, ..., n − 1} è detto un salto, se vale che A[i − 1] + 1 < A[i]. Mostrare due esempi di array A con n ≥ 5 tali che: in un esempio non ci sia un salto, in un esempio ci sia. Scrivere un algoritmo (dando una breve descrizione a parole e lo pseudocodice) di costo computazionale O(log n) che restituisca -1 se l’array A non ha un salto, l’indice di un salto altrimenti.

```*[-]*``` Si consideri il seguente problema:
```*INPUT*```: un DAG G = (V, E) con V = {1, . . . , n} memorizzato tramite liste di adiacenza
```*OUTPUT*```: stampare degli identificativi delle sorgenti del grafo
Fornire lo pseudocodice di un algoritmo e studiarne il costo computazionale.

```*[-]*``` Un SumTree è un albero binario che memorizza chiavi numeriche nei nodi e in cui la chiave di ogni nodo interno v è uguale alla somma delle chiavi degli ALTRI nodi nel sottoalbero radicato in v. Si mostrino due esempi di alberi binari di altezza almeno 3: (1) uno che sia un SumTree e (2) uno che non lo sia.
Si consideri il seguente problema:
```*INPUT*```: albero binario T memorizzato tramite nodi e puntatori (campo con puntatore a figlio sinistro, campo con puntatore a figlio destro e campo key) che memorizza interi strettamente positivi (> 0) nel campo key.
```*OUTPUT*```: VERO se l’albero è un SumTree e FALSO altrimenti 
- Si scriva un algoritmo che risolva il problema.
- Descrivere brevemente la soluzione a parole e fornire lo pseudocodice. 
- Studiare il costo computazionale dell’algoritmo proposto

```*[-]*``` Si consideri il seguente problema:
```*INPUT*```: Due array A e B entrambi di dimensione n (nota) che memorizzano interi positivi, e il valore massimo memorizzato nei due array k tale che k ≤ n (noto).
```*OUTPUT*```: VERO se i due array memorizzano lo stesso insieme di naturali con la stessa numerosit`a, FALSO altrimenti.
Fornire lo pseudocodice di un algoritmo di costo computazionale LINEARE che risolva il problema.

```*[-]*``` Si consideri il seguente problema:
```*INPUT*```: un albero binario T realizzato con nodi e puntatori. I campi di ogni nodo dell’albero sono: lef t puntatore al figlio sinistro, right puntatore al figlio destro, key che memorizza un numero naturale.
```*OUTPUT*```: per ogni nodo u dell’albero, stampare la media dei valori contenuti nei nodi del sottoalbero radicato in u (radice compresa) Fornire un esempio di input e output del problema con un albero T di altezza almeno tre. Fornire lo pseudo-codice di un algoritmo che utilizzi la ricorsione ma che NON usi variabili globali all’interno delle chiamate ricorsive. Studiare il costo computazionale dell’algoritmo proposto.

```*[-]*``` Si consideri il seguente problema:
```*INPUT*```: un grafo DIRETTO G = (V, E) di n ≥ 3 nodi (con identificativi gli interi compresi tra 1 e n), tre nodi del grafo u, v, w ∈ V .
```*OUTPUT*```: la lunghezza del cammino pi`u breve che va dal nodo u al nodo v e che NON passa per w. 
```*OUTPUT*```: stampa dei nodi sul cammino pi`u breve che va dal nodo u al nodo v e che NON passa per w (nell’odine giusto), oppure stampa ”non esiste cammino” nel caso in cui tale cammino non esista. Usare la rappresentazione ad alto livello del grafo. Spiegare brevemente a parole il funzionamento dell’algoritmo e fornire lo presudo-codice. Studiare il costo computazionale dell’algoritmo proposto. ```