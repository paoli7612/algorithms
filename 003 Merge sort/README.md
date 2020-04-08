
## Sort merge

**Algoritmo di ordinamento array di N numeri creato tramite il *divide ed timpera***


## Merge sort

**Esercizio 2.2-2**


```c++
int l1=0, l2=0;
for (int i=0; i<N; i++){
  if(l1==N/2){
    r[i] = a2[l2++];
    continue;
  } else if(l2 == N/2){
    r[i] = a1[l1++];
    continue;
  }
  if (a1[l1]<a2[l2]){
    r[i] = a1[l1++];
  } else {
    r[i] = a2[l2++];
  }
}
```

Supponiamo di avere un mazzo di carte; lo dividiamo in due mazzi e li mettiamo in ordine (ognuno di essi) come nel esempio:
a1 = {0,1,3,7,8}
a2 = {2,4,5,6,9}
Abbiamo quindi una funzione merge che partendo da i due mazzi rivolti verso l'alto, scelga la carta più piccola(scoprendone un altra di quel mazzo) e la piazzi alla posizione 1 del array finale "ordinato"; e cosi via...
Nel esempio, l'array ordinato, è **r**.

Il ciclo parte
  se l1 e l2 sono diversi dal N/2 saltiamo il primo **if else**.
  altrimenti vuol dire che gia uno dei due sottomazzi è gia finito:
    quindi semplicemente aggiungiamo una carta alla volta tutte quelle dell'altro mazzo senza fare controlli
    completiamo precocemente il ciclo e andiamo avanti (per evitare errori: paragonare il numero di un array ad una posizione il cui indice è maggiore della liunghezza dell'array)
  se "la prima carta del primo mazzo" = a1[l1] è più piccola della "prima carta del secondo mazzo" = a2[l2]:
    aggiungiamo la "prima carta del primo mazzo" = a1[l1] al mazzo **r**
    incrementiamo l1 (quindi al prossimo ciclo del **for** "la prima carta del primo mazzo" = a1[l1] sarà quella dopo perchè "quella prima" = a1[l1-1] la abbaimo gia usata)
  altrimenti se la "prima carta del secondo mazzo" = a2[l2] è più piccola della "prima carta del primo mazzo" = a1[l1] o se le carte sono identiche:
    mettiamo la "prima carta del secondo mazzo" = a2[l2] nel mazzo **r**
    incrementiamo l2 (quindi al prossimo ciclo del **for** "la prima carta del secondo mazzo" = a2[l2] sarà quella dopo perchè "quella prima" = a2[l2-1] la abbaimo gia usata)
