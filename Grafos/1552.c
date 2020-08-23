#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define true 1
#define false 0
#define MAXSIZE 300000

// u e v indicam o número dos vértices
// por exemplo aresta (1,2) - peso 3
typedef struct{
    int u, v;
    double peso;
} grafo;

typedef struct{
    int x, y;
} point;

grafo g[MAXSIZE];
point points[MAXSIZE];
// vetor com as arestas da árvore 
// geradora nínima
int t[MAXSIZE];

// função usada para a ordenação
int compara(grafo *a, grafo *b){
    double tmp = a->peso - b->peso;

    if (tmp > 0.0) return 1;
    else if (tmp < 0.0) return -1;
    else return 0;
}

// função auxiliar do algoritmo de kruskal
int parent(int i){
    return i == t[i] ? i : parent(t[i]);
}

// algoritmo de kruskal
double kruskal(int __c){
    int i;
    int u, v;
    double ans;

    for (i = 0, ans = 0; i < __c; ++i){
        u = parent(g[i].u);
        v = parent(g[i].v);

        if (v != u) t[u] = t[v], ans += g[i].peso;
    }

    return ans;
}


double dist(point a, point b){
    return hypot(b.x - a.x, b.y - a.y);
}

int main(int argc, char **argv){
	int i, j, n, c, k;

    scanf("%d", &n);

    for(i=0, k=0; i<n; i++){
        scanf("%d %d", &points[i].x, &points[i].y);

        for(j=0; j<i; j++){
            g[k].u = i;
            g[k].v = i;
            g[k].peso = dist(points[j], points[i]) / 100.0;
            ++k;
        }
    }

    qsort(g, k, sizeof(grafo), compara);

    for(i=0; i<n; i++) t[i] = i;

    printf("%.2lf\n", kruskal(k));
	return 0;
}

