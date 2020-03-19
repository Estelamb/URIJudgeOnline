#include <stdio.h>
#include <stdlib.h>

int main() {
    double n1, n2, n3, n4, exame, media, mediafinal;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %.1lf\n", media);

    if(media>=7.0){
        printf("Aluno aprovado.\n");
    } else if(media<5){
        printf("Aluno reprovado.\n");
    } else if(media>=5.0 && media<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        mediafinal = (media + exame)/2;

        if(mediafinal>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", mediafinal);
        } else if(mediafinal<=4.9){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", mediafinal);
        }
    }
    return 0;
}
