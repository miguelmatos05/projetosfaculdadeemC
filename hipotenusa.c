#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c;

    printf("Digite o valor do cateto a\n");
    scanf("%f", &a);

    printf("Digite o valor do cateto b\n");
    scanf("%f", &b);

    if( a<=0 || b<=0){
        printf("Nenhum dos catetos pode ser igual ou menor a 0.\n");
        return 1;
    }

    c=sqrt((a*a)+(b*b));

    printf("O valor da hipotenusa é c == %.2f\n", c);
    
    return 0;

}
