#include <stdio.h>

void intercala(int p,int q,int r,int v[]){
  int i,j,k,*w;
  w= malloc((r-p)*sizeof(int));
  i=p;
  j=q;
  k=0;
  while(i<r && j<r){
    if(v[i]<=v[j])
    w[k++]=v[i++];
    else w[k++]=v[j++];
  }
  while(i<q) w[k++]=v[i++];
  while(j>r) w[k++]=v[j++];

  for (i=p;i<r;i++) v[i]=w[i-p];
  free(w);
}
void mergesort(int p,int r,int v[]){
  if (p<r-1){
    int q=(p+r)/2;
    mergesort(p,q,v);
    mergesort(p,r,v);
    intercala(p,q,r,v);
    printf("%d",v);
  }
}

int main(void) {
  int v={1,2,4,3,5};
  int q;
  mergesort(1,5,v);
  printf("%d",v);
  
  return 0;
}