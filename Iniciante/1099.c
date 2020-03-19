#include <stdio.h>

int main() {
    int n,i,j,x,y,somaimpar,a=0;
    scanf("%d", &n);
    while (a<n){
        somaimpar=0;
        scanf("%d", &x);
        scanf("%d", &y);

        if(y<x) {
            for (i = y+1; i < x; i++) {
                if (i % 2 != 0)
                    somaimpar += i;
            }
        }else if(y>x){
            for(i=(x+1); i<y; i++){
                if (i%2!=0)
                    somaimpar+=i;
            }
        }
        printf("%d\n", somaimpar);
        a++;
    }
}
