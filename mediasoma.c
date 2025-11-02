#include <stdio.h>
#include <float.h>

int main(){
    double num, soma = 0; 
    int count = 0;
    double max = -DBL_MAX;
    double min = DBL_MAX;

    while(scanf("%lf", &num) == 1){
        soma += num;
        if( num > max){max = num;}
        if( num < min){min = num;}
        count++;
    }

    if(count == 0){
        printf("Nehum número foi inserido.\n");

    }else{
            double media = soma / count;
            printf("A média dos números é %.2lf, o máximo é %.2lf e o mínimo é %.2lf\n", media, max, min);

        }

    return 0;

}