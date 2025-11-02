#include <stdio.h>

int main(){

    float x;

    printf("Qual a altura da pessoa?\n");
    scanf("%f", &x);

    if(x < 1.30){
        printf("Essa pessoa é baixissíma.\n");
    }

    else if(x>=1.30 && x<1.60){
        printf("Essa pessoa é baixa.\n");
    }

    else if(x>=1.60 && x<1.75){
        printf("Essa pessoa é mediana.\n");
    }

    else if(x>=1.75 && x<1.90){
        printf("Essa pessoa é alta.\n");
    }

    else if(x>=1.90){
        printf("Essa pessoa é altissíma.\n");
    }

    return 0;
    
    }