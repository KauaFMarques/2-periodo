#include <stdio.h>

void merge_sort(int a[], int length);
void merge_sort_recursion(int a[], int l, int r);
void merge_sorted_arrays(int a[], int l, int m, int r);

int main(){
  int array[] = { 9, 4, 8, 1, 7, 0, 3, 2, 5, 6};
  int length = 10;
  
  // ordenar a matriz usando a fusão sort
  merge_sort(array, length);
  
  //  imprimir os elementos da matriz para verificar que foram ordenados
  for (int i = 0; i < length; i++)
    printf("%d ", array[i]);
  printf("\n");
  
  return 0;
}


void merge_sort(int a[], int length)
{
  merge_sort_recursion(a, 0, length - 1);
}


void merge_sort_recursion(int a[], int l, int r)
{
 // paramos a recorrência quando l >= r
  if (l < r)
  {
   // encontrar o ponto médio de l e r
    int m = l + (r - l) / 2;
  
    // aplicar a função recursivamente às porções esquerda e direita divididas 
    // no ponto médio
    merge_sort_recursion(a, l, m);
    merge_sort_recursion(a, m + 1, r);
  
    // neste momento, ambas as partes da matriz foram classificadas, e nós agora 
    // fundir as porções ordenadas da matriz
    merge_sorted_arrays(a, l, m, r);
  }
}


void merge_sorted_arrays(int a[], int l, int m, int r)
{
  // calcular o comprimento das porções esquerda e direita da matriz
  int left_length = m - l + 1;
  int right_length = r - m;
  
   // criar arrays temporários para armazenar estas porções
  int temp_left[left_length];
  int temp_right[right_length];
  
  //utilizado como variáveis de índice/contador para os 3 arrays a, temp_left, temp_right
  int i, j, k;
  
   // copiar a parte esquerda para a temp_left array
  for (int i = 0; i < left_length; i++)
    temp_left[i] = a[l + i];
  
  // copiar a parte direita para a temp_right array
  for (int i = 0; i < right_length; i++)
    temp_right[i] = a[m + 1 + i];
  

  for (i = 0, j = 0, k = l; k <= r; k++)
  {
    // desde que ainda não tenhamos chegado ao fim da matriz temp_left 
    // com a nossa variável i, então se o próximo elemento na matriz à esquerda_temp 
    // é menor OU se tivermos atingido o fim da gama temp_right, 
    // depois armazenar o próximo elemento de temp_left para o próximo elemento em 
    // a matriz a
    if ((i < left_length) &&
        (j >= right_length || temp_left[i] <= temp_right[j]))
    {
      a[k] = temp_left[i];
      i++;
    }
    // caso contrário, se o próximo elemento em temp_right do que o próximo elemento em 
    // temp_left OU chegamos ao fim da temp_left, armazenar o próximo 
    // elemento da matriz temp_right para o próximo elemento da matriz a
    else
    {
      a[k] = temp_right[j];
      j++;
    }
  }  
}
