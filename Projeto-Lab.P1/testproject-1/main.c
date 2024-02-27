//ordenação
int particiona(int *v,int ini, int fim){
  int esq,dir,pivo,aux;
  esq=ini;
  dir=fim;
  pivo=v[ini];
  while(esq<dir){
    while(esq <= fim && v[esq] <= pivo)
     esq++;

    while(dir >= 0 && v[dir] > pivo)
     dir--;
    if(esq<dir){
      aux=v[esq];
      v[esq]=v[dir];
      v[dir]=aux;
    }
  }
  v[ini]=v[dir];
  v[dir]=pivo;
    return dir;
}
void quicksort(int *v,int ini,int fim){
  int pivo;
  if(fim>ini){
    pivo = particiona(v,ini,fim);
    quicksort(v,ini,pivo-1);
    quicksort(v,pivo+1,fim);
  }
}
void ordenar(int *v,int ini,int tam){
  int i;
  printf("vetor desordenado: \n");

  for(i=0;i<tam;i++){
    printf("{%d}",v[i]);
  }
  printf("\n");
  
  

  printf("vetor ordenado: \n");

  for(i=0;i<tam;i++){
    printf("{%d}",v[i]);
  }
}

void ler_vetor(int *v, int tam) {
  for(int i = 0; i < tam; i++){
    printf ("informe o valor para a posição %d: ",i);
    scanf ("%d",&v[i]);  
  }
}

void imprimir_vetor( int *v, int tam){
  for( int i = 0; i < tam; i++){
    printf("%d",v[i]);
  }
  printf("\n");
}
int main(void){
  int *vetor, tamanho;
  printf("Digite o tamanho do vetor? ");
  scanf("%d",&tamanho);
  vetor = malloc(sizeof(int)* tamanho);
  ler_vetor(vetor,tamanho);
  imprimir_vetor(vetor,tamanho);
  //quicksort(vetor,tamanho);
  
  return 0;
}