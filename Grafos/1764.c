#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define MAXSIZE 40050
#define MAXSIZE_T 40000

// u e v indicam o número dos vértices
// por exemplo aresta (1,2) - peso 3
typedef struct{
    int u, v, peso;
} grafo;

grafo g[MAXSIZE];
// vetor com as arestas da árvore 
// geradora nínima
int t[MAXSIZE_T];

// função usada para a ordenação
int compara(grafo *a, grafo *b){
	return (a->peso - b->peso);
}

// função auxiliar do algoritmo de kruskal
int componente(int __i){
    if (__i == t[__i]) return __i;

	return componente(t[__i]);
}

// algoritmo de kruskal
int kruskal(int __c){
	int i, ans, v, u;

	for (i = 0, ans = 0; i < __c; ++i){
		v = componente(g[i].v);
		u = componente(g[i].u);

		if (v != u) t[v] = t[u], ans += g[i].peso;
	}

	return ans;
}

int main(int argc, char **argv){
	int m, n, i;

	while (scanf("%d %d", &m, &n), m && n){
		memset(g, 0, sizeof(g));
		memset(t, 0, sizeof(t));

		for (i = 0; i < n; ++i) scanf("%d %d %d", &g[i].v, &g[i].u, &g[i].peso);

		qsort(g, n, sizeof(grafo), compara);

		for (i = 1; i <=m ; ++i) t[i] = i;

		printf("%d\n", kruskal(n));
	}
	return 0;
}

