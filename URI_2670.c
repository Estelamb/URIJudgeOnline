#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a1, a2, a3, total1, total2, total3;

    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &a3);

    total1 = (a2*2) + (a3*4);
    
    total2 = (a1*2) + (a3*2);
    
    total3 = (a1*4) + (a2*2);

    if (total1 <= total2 && total1 <= total3){
        printf("%d\n", total1);

    } else if (total2 <= total1 && total2 <= total3){
        printf("%d\n", total2);

    } else if (total3 <= total1 && total3 <= total2){
        printf("%d\n", total3);

    }
}
