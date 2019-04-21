#include <stdio.h>
#include <string.h>

int main() {
    int n,i,j, contp, contm, menor,cont;
    char m[51];
    char p[51];
    char f[101];
    char maior[51];

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%s", m);
        scanf("%s", p);

        contm = 0;
        contp = 0;
        if(strlen(m)>strlen(p)){
            menor = strlen(p);
            strcpy(maior, m);
        }
        else{
            menor = strlen(m);
            strcpy(maior, p);
        }

        for(j=0; j<2*menor; j++){
            if(j%2 != 0) {
                f[j] = p[contp];
                contp ++;
            } else{
                f[j] = m[contm];
                contm ++;
            }
        }

        if(strlen(m)>strlen(p)){
            cont = contp;
        } else{
            cont = contm;
        }
        f[j] = '\0';
        strcat(f,&maior[cont]);

        printf("%s\n", f);
    }
}
