#include <stdio.h>
#include <stdlib.h>

//busca binária
int buscaB(int v[],int t, int x){
	
int ini = 0;
int fim = t-1;
int meio;
int cont=0;

while(ini<=fim){
	cont++;
	printf("Execucao %d\n", cont);
	meio = (ini+fim)/2;
	printf("Valor ini %d, valor fim %d e valor meio = %d\n", ini,fim,meio);
	
	if (x==v[meio]){
		printf("Valor %d eh igual ao valor %d da posicao %d\n",x,v[meio],meio);
		return meio;
	}else if(x<v[meio]){
		printf("Valor %d eh menor que o valor %d da posicao %d\n",x,v[meio],meio);
		fim = meio-1;
	}else{
		printf("Valor %d eh maior que o valor %d da posicao %d\n",x,v[meio],meio);
		ini = meio+1;
	}
}

return -1;
	
}
//busca binária

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
    scanf("%d",&vet[i]);
  }
}

void exibirvet(int vet[],int tam){
  int i;
  for(i=0;i<tam;i++){
    printf("%d ",vet[i]);
  }
}

int vet,t,w,x,r;

int main(void) {

/*void lervet(int vet[],int tam);*/
 int n;
  while(n != 0){ 
  printf("Digite :\n");
  printf("1 - Inserir dados;\n");
  printf("2 - Ordenar dados;\n");
  printf("3 - Imprimir dados;\n");
  printf("4 - Realizar busca;\n");
  printf("4 - Realizar busca;\n");
  printf("0 - Sair\n");
  printf("digite um número:");
  scanf("%d",&n);

  
    
  switch(n){
    case 1:{ 
    printf("o vetor terá tamanho 5:\n");
    t=5;
    int vet[t];
    lervet(&vet,t);
      printf("deseja ver o vetor? digite 3:");
          scanf("%d",&w);
        if(w=3){
         exibirvet(vet,t); 
        }
    //exibirvet(vet,t);
    printf(" deseja ter o vetor ordenado ? Digite 2: ");
      scanf("%d",&w);
      if(w=2){
      mergesort(&vet,t);
        printf("deseja ver o vetor? digite 3:");
          scanf("%d",&w);
        if(w=3){
          exibirvet(vet,t);
        }

        }

      printf("deseja saber se umvalor está inserido dentro ? digite 4:");
      scanf("%d",&w);
      if(w=4){ 
        printf("Digite o valor a ser procurado: ");
        scanf("%d",&x);
        int r=buscaB(vet,t,x);
        if(r!=-1){
          printf("Valor %d foi encontrado na posicao %d que tem o valor %d\n",x,r,vet[r]);
}else{
	printf("Valor nao encontrado");
}
        }
      
    //mergesort(vet,t);
    //int i;
    //for (i = 0; i < t; i++) printf("%d ", vet[i]);
    //putchar('\n');
      break;}

    case 2:{ 
      printf("volte pro 1 para inserir\n");
    /* mergesort(&vet,t);
    int i;
    for (i = 0; i < t; i++) printf("%d ", vet);
    putchar('\n');
    break;*/
    }
    case 3:{
      printf("volte pro 1 .\n");
      //exibirvet(&vet,t);
    }
    case 4:{
      printf("volte pro 1 .\n");
    }
  }
  
}
printf("você Saiu.");
  
  
  return 0;
}