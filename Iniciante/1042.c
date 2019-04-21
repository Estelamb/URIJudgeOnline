#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c, num[3],i,j, temp;

    scanf("%d %d %d", &a, &b, &c);

    num[0] = a;
    num[1] = b;
    num[2] = c;

    for(i=0; i<3; i++){
        for(j=i; j<3; j++){
            if(num[i] > num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for(i=0; i<3; i++){
        printf("%d\n", num[i]);
    }

    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    return 0;
}
