#include <stdio.h>
#include <math.h>

void raizes(float a, float b, float c){

      if (a == 0) {
        printf("Isto nao e uma equacao quadratica (a = 0).\n");
        return;
    }

    float delta=b*b-4*a*c;



    if(delta==0){
         float x = -b / (2*a);

        printf("Raiz real dupla:\n");
        printf("x = %.2f\n", x);

    }else if(delta>0){
        
        float x1 = (-b + sqrt(delta)) / (2*a);
        float x2 = (-b - sqrt(delta)) / (2*a);

        printf("Raizes reais:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);

    }else{

        float parteReal = -b / (2*a);
        float parteImaginaria = sqrt(-delta) / (2*a);

        printf("Raizes complexas:\n");
        printf("x1 = %.2f + %.2fi\n", parteReal, parteImaginaria);
        printf("x2 = %.2f - %.2fi\n", parteReal, parteImaginaria);
    }
}


int main(){

    float a,b,c;


    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    raizes(a,b,c);


    return 0;

}