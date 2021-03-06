
## Insertion sort
```c++
for (int j=1; j<N; j++){
  int k = a[j];
  int i = j-1;
  while (i>=0 && a[i]>k){
    a[i+1] = a[i];
    i--;
  }
  a[i+1] = k;
}
```)

### Tempo di esecuzione
Per analizzare il **tempo di esecuzione** di un algoritmo che impiega un tempo variabile a seconda del array di input (array lungo o corto, gia quasi ordinato o completamente disordinato ecc.) partiamo dal analizzare quante volte ogni riga si ripeterà.
Commentiamo quindi a fianco ad ogni riga il numero di volte che essa si ripeterà (utilizzando il nome delle variabili che cambiano in base al imput).

**talasciamo commenti o graffe**.
Indichiamo con t<sub>j</sub> il numero di volte che il ciclo **while** (della riga 4) viene eseguito per quel valore di j.

Teniamo inoltre conto che quando un **while** o un **for** terminano in modo "consueto" (ovvero come stabilito dal test all'inizio del ciclo), il test viene eseguito una volta in più del corpo del ciclo (quindi fino a che j<N (riga 1) non risulta falso continuo il corpo del **for** ma controllerò se j<N una volta in più delle volte che eseguo il suo interno perche mi darà **false** e quindi non eseguirò il corpo)

```c++
for (int j=1; j<N; j++){    // N
  int k = a[j];             // N-1
  int i = j-1;              // N-1
  while (i>=0 && a[i]>k){    // Σ j=2 to N (tj)
    a[i+1] = a[i];          // Σ j=2 to N (tj-1)
    i--;                    // Σ j=2 to N (tj-1)
  }                         // 0
  a[i+1] = k;               // N-1
}                           // 0
```
Ogni esecuzione dell'**i-esima** riga richiede un suo determinato tempo che indichiamo con **c<sub>i</sub>**.

Otteniamo quindi che il tempo T(n) (il tempo di esecuzione del algoritmo in funzione al input n) sarà la somma totale del "costo" di ogni riga moltiplicato al numero di vole che la riga viene eseguita. Per esmpio la riga 2 avrà un costo pari ad:
**c<sub>2</sub>*(N-1)**: ovvero "il costo necessario ad inizializzare la variabile **k** e dargli il valore di **a[j]**, per **N-1** volte" e cosi via

Quindi il nostro T(n) sarà:

T(n) =
  c<sub>1</sub>n
    +
  c<sub>2</sub>(n-1)
    +
  c<sub>3</sub>(n-1)
    +
  c<sub>4</sub>Σ([j=2 to n] t<sub>j</sub>)
    +
  c<sub>5</sub>Σ([j=2 to n] t<sub>j</sub>-1)
    +
  c<sub>6</sub>Σ([j=2 to n] t<sub>j</sub>-1)
    +
  c<sub>7</sub>(n-1)

  Ovvero la somma di tutti costi delle varie righe moltiplicati per tutte le volte che ogni riga viene eseguita
