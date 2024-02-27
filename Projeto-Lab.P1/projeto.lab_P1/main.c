#include <stdio.h>
#include <stdlib.h>

//merge sort
void mergesort(int *v, int n);
void sort(int *v, int *c, int i, int f);
void merge(int *v, int *c, int i, int m, int f);

void mergesort(int *v, int n) {
  int *c = malloc(sizeof(int) * n);
  sort(v, c, 0, n - 1);
  free(c);
}

/*
  Dado um vetor de inteiros v e dois inteiros i e f, ordena o vetor v[i..f] em ordem crescente.
  O vetor c é utilizado internamente durante a ordenação.
*/
void sort(int *v, int *c, int i, int f) {
  if (i >= f) return;

  int m = (i + f) / 2;

  sort(v, c, i, m);
  sort(v, c, m + 1, f);

  /* Se v[m] <= v[m + 1], então v[i..f] já está ordenado. */
  if (v[m] <= v[m + 1]) return;

  merge(v, c, i, m, f);
}


/*
  Dado um vetor v e três inteiros i, m e f, sendo v[i..m] e v[m+1..f] vetores ordenados,
  coloca os elementos destes vetores, em ordem crescente, no vetor em v[i..f].
*/
void merge(int *v, int *c, int i, int m, int f) {
  int z,
      iv = i, ic = m + 1;

  for (z = i; z <= f; z++) c[z] = v[z];

  z = i;

  while (iv <= m && ic <= f) {
    /* Invariante: v[i..z] possui os valores de v[iv..m] e v[ic..f] em ordem crescente. */

    if (c[iv] <= c[ic]) v[z++] = c[iv++];
    else v[z++] = c[ic++];
  }

  while (iv <= m) v[z++] = c[iv++];

  while (ic <= f) v[z++] = c[ic++];
}
//merge sort
void lervet(int *vet,int tam){
  int i;
  for(i=0;i<tam;i++){
    printf("Digite um valor para a posição %d: ",i+1);
    scanf("%d ",&vet[i]);
  }
}

void exibirvet(int vet,int tam){
  int i;
  for(i=0;i<tam;i++){
    printf("%d ",vet);
  }
}


int main(void) {

//int lervet(int vet[],int tam);
 int n;
  while(n != 0){ 
  printf("Digite :\n");
  printf("1 - Inserir dados;\n");
  printf("2 - Ordenar dados;\n");
  printf("3 - Imprimir dados;\n");
  printf("4 - Realizar busca;\n");
  printf("4 - Realizar busca;\n");
  printf("0 - Sair\n");
  printf("Digite um número:");
  scanf("%d",&n);
    
    
  switch(n){
    int vet,t,aux;
    t=4;
    case 1:{ 
    int *vet;
    t=4;
  //  printf("Digite o tamanho do vetor:\n");
  //  scanf("%d",&t);
//    int vet[t];
  lervet(&vet,t);
  //aux=lervet(vet,t);
  exibirvet(&vet,t);
  //  mergesort(vet,t);
  //  int i;
  //  for (i = 0; i < t; i++) printf("%d ", vet[i]);
  //  putchar('\n');
      break;}

    case 2:{
    int vet,t,aux;
    t=4;
    mergesort(&vet,t);
    int i;
    for (i = 0; i < t; i++) printf("%d ",vet);
    putchar('\n');
    break;}
    
  }
  
}

  
  
  return 0;
}