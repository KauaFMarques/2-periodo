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

// Realiza uma espécie de fusão da matriz a com o comprimento dado, a função 
// proporciona uma interface mais fácil/preparada para a utilização do tipo merge sort para o 
// programador, uma vez que precisam simplesmente de fornecer a matriz e o seu comprimento
void merge_sort(int a[], int length)
{
 // chamar a função de recursividade de tipo de fusão, o índice esquerdo de 0 e o
  // índice de comprimento direito - 1 são fornecidos como estamos a procurar inicialmente 
  // ao ordenar "todo o conjunto"
  merge_sort_recursion(a, 0, length - 1);
}

// Aplica o algoritmo de ordenação de fusão à matriz a entre o índice esquerdo l
// e o índice certo r. Esta função implementa a função recursiva 
// etapa de dividir e conquistar do algoritmo de separação da fusão, dividindo a matriz
// porção entre l...r no meio, e chamando-se a si próprio em cada porção, 
// antes de aplicar a função de fundir as porções ordenadas da matriz 
// que resultará.
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

// funde as duas porções ordenadas da matriz a entre os índices l ... m
// e m + 1 .... r
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
  
  // Use i para se mover através dos índices de temp_left, j para se mover através dos índices de temp_left, j para se mover através dos índices de 
  // índices de temp_right, e k para mover-se através da parte da matriz 
  // a de l ... r. Basicamente continuamos a verificar a "cabeça" da temp_left 
  // e temp_right (sabendo que ambas as arrays estão ordenadas) e colocar o menor de 
  // os dois em array a (utilizando i, j, k para se moverem através dos arrays).  Quando
  // esgotamos elementos em temp_left ou temp_direita, os restantes 
  // elementos da outra matriz serão copiados para um
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


// Exemplo de visualização do algoritmo merge sort :
//
//          [38, 27, 43, 3, 9, 82, 10]
//                     /   \
//       [38, 27, 43, 3]   [9, 82, 10]
//        /         |         |      \
//   [38, 27]    [43, 3]   [9, 82]   [10]
//    /   |      /    |    /    \      |
// [38]  [27]  [43]  [3]  [9]   [82]  [10]
//    \  /       \   /     \     /     |
//   [27, 38]    [3, 43]   [9, 82]    [10]
//       \         /          \        /
//     [3, 27, 38, 43]        [9, 10, 82]
//           \                  /
//          [3, 9, 10, 27, 38, 43, 82]
//
// O conjunto é primeiro dividido em porções progressivamente mais pequenas e não separadas de
// a matriz, e uma vez que temos "subarrays" de 1 elemento, eles são por definição
// arrays ordenados.  A partir daqui, as "matrizes ordenadas" são fundidas até 
// chegar ao conjunto completo classificado.
//