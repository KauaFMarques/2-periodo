#include <stdio.h>

typedef struct noh Noh;

struct noh{
 int rotulo;
 Noh *prox;
};

typedef struct grafo* Grafo;
struct grafo{
 Noh **a;
int n,m;
};

Grafo iniciaclizargrafo (int n);
void inserearcografo ( Grafo g, int v , int w);
void iserirarconaoseguragrafo ( Grafo g, int v , int w);
void mostragrafo(Grafo g);
void imprimegrafo(Grafo g);
void imprimearquivografo(Grafo g,FILE *saida);

Grafo liberagrafo(Grafo g);

int main(void) {
  printf("Hello World\n");
  return 0;
}