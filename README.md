### Introduzione agli algoritmi e strutture dati

#### Fondamenti
001
<a href="001 Insertion sort" >Insertion sort</a><br>
```c++
for (int j=2; j<N; j++){
  int k = a[j];
  int i = j-1;
  while (i>0 && a[i]>k){
    a[i+1] = a[i];
    i--;
  }
  a[i+1] = k;		
}
```
002
<a href="002 Selection sort" >Selection sort</a><br>
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
```
