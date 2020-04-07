
## Insertion sort

**Esercizio 2.2-2**


```c++
for (int j=0; j<N; j++){
  int k=a[j], p=j, s;
  for (int i=j+1; i<N; i++){
    if (a[i] < k){
      k = a[i];
      p = i;
    }
  }
  s = a[j];
  a[j] = k;
  a[p] = s;
}
```)
