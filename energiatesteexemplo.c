#include <stdio.h>

int main(){

    int i=0, producao, prodmaxima=0, diaMax=0, total;
    float nhoras;

    while(scanf("%d %f", &producao, &nhoras)==2){

        printf("%d %d %.f %.2f\n", i+1, producao, nhoras, producao/nhoras);
        total += producao;
        i++;
        if(producao > prodmaxima){
            prodmaxima = producao;
            diaMax = i;

        }

    }

    printf("media = %,2f\n", (float)total/i);
    printf("producao máxima = %d kWh (dia %d)\n", prodmaxima, diaMax);


    return 0;
}