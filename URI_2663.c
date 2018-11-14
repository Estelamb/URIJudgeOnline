#include <stdio.h>
 
int main(){
    int i, j, tmp, n, k, passaram;
    scanf("%d", &n);
    scanf("%d", &k);
    int notas[n];

    for (i=0;i<n;i++){
        scanf("%d", &notas[i]);
    }

    for (i = 1; i < n; i++) {
        j = i;
        while (j > 0 && notas[j - 1] < notas[j]) {
                tmp = notas[j];
                notas[j] = notas[j - 1];
                notas[j - 1] = tmp;
                j--;
        }
    }
    tmp = notas[k-1];
    passaram = k;
    for(i=k;i<n;i++){
        if(tmp == notas[i])
            passaram++;
        else
            break;
    }
    printf("%d\n",passaram);
}
