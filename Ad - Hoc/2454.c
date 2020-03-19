#include <stdio.h>

int main() {
    int P, R;
    scanf("%d %d", &P, &R);

    if(P == 1 && R == 1)
        printf("A\n");
    if(P == 1 && R == 0)
        printf("B\n");
    if(P == 0)
        printf("C\n");

    return 0;
}
