#include <stdio.h>

int main(){

    int h;

    printf("Altura da árvore?");
    scanf("%d", &h);

if(h<4){
    printf("Árvore pequena\n");
    return 1;
}

   for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= h - i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    int tronco_altura = h/4;
    if(tronco_altura == 0){tronco_altura = 1;}

    for(int i= 0; i< tronco_altura; i++){
        for(int j=0; j<(h-1); j++){
            printf(" ");
        }
        printf("*\n");
    }

    return 0;

    
}