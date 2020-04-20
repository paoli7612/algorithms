
## Sort merge

**Algoritmo di ordinamento array di N numeri creato tramite il *divide ed timpera***


## Merge sort

**Esercizio 2.2-2**


```c++
void merge(int a[], int start, int mid, int end) {
  int i, j, k=0, b[N];
  i = start;
  j = mid+1;

  while (i<=mid && j<=end) {
    if (a[i]<a[j]) {
      b[k++] = a[i++];
    } else {
      b[k++] = a[j++];
    }
  }
  while (i <= mid)
    b[k++] = a[i++];

  while (j <= end)
    b[k++] = a[j++];

  for (k=start; k<=end; k++)
    a[k] = b[k-start];
  return;
}

void merge_sort(int a[], int start, int end) {
  int mid;
  if (start < end) {
    mid = (start+end)/2;
    merge_sort(a, start, mid);
    merge_sort(a, mid+1, end);
    merge(a, start, mid, end);
  }
  return;
}
```
<img src="esempio.png"/>
