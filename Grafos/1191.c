#include <stdio.h>
#include <stdlib.h>
#include <string.h>

short indice;

typedef struct TipoNo{
  char letra;
  struct TipoNo *Esquerda;
  struct TipoNo *Direita;
}TipoNo;

TipoNo* novoNo(char letra){
  TipoNo *Arvore = (TipoNo *)malloc(sizeof(TipoNo));
  Arvore->letra = letra;
  Arvore->Esquerda =  NULL;
  Arvore->Direita = NULL;

  return Arvore;
}

int src(char *str, int inicio, int fim, char letra){
  short i;
  for(i = inicio; i<=fim; i++){
    if(str[i] == letra)
      return i;
  }

  return -1;
}

TipoNo* ArvoreBinaria(char *infixo, char *prefixo, int inInicio, int inFim){
  int infixoIndice;

  if(inInicio > inFim)
    return NULL;

  TipoNo *Arvore = novoNo(prefixo[indice++]);

  if(inInicio == inFim)
    return Arvore;

  infixoIndice = src(infixo, inInicio, inFim, Arvore->letra);
  Arvore->Esquerda = ArvoreBinaria(infixo, prefixo, inInicio, infixoIndice-1);
  Arvore->Direita = ArvoreBinaria(infixo, prefixo, infixoIndice+1, inFim);

  return Arvore;
}

void caminhaPosOrdem(TipoNo *Arvore){
    if(Arvore == NULL) return;
    caminhaPosOrdem(Arvore->Esquerda);
    caminhaPosOrdem(Arvore->Direita);
    printf("%c",Arvore->letra);
}

int main() {
  char prefixo[30], infixo[30];

  while(scanf("%s %s", prefixo, infixo) != EOF){
    int tam = strlen(prefixo);
    indice = 0;
    TipoNo *Arvore = ArvoreBinaria(infixo, prefixo, 0, tam-1);
    caminhaPosOrdem(Arvore);
    printf("\n");
  }
  return 0;
}
