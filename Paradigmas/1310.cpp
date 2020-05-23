#include <iostream>
#include <stdio.h>
#include <vector>

#define MAX 1123

using namespace std;

// Para esta solução é necessário do Algoritmo de Kadane
// que busca a maior soma contígua
int kadane(int N, int custoDia, int ganhosDia[]){
  int maxAtual = 0, maxTotal = 0, i;

  for(i=0; i<N; i++){
    maxAtual = max(ganhosDia[i] - custoDia, maxAtual + ganhosDia[i] - custoDia);
    maxTotal = max(maxTotal, maxAtual);
  }

  return maxTotal;
}

int main(){
  int N, custoDia, i, aux,ganhosDia[MAX];

  while(scanf("%d", &N) != EOF){
    cin >> custoDia;

    for(i=0; i<N; i++) scanf("%d", ganhosDia+i);

    cout << kadane(N, custoDia, ganhosDia) << endl;
  }
  return 0;
}
