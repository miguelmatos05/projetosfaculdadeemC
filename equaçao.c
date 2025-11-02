#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c,delta, x1, x2;

    printf("Insira os coeficientes da equacao ax^2+bx+c=0: \n");
    scanf("%f %f %f", &a, &b, &c);

    delta = b*b - 4*a*c;

    if(a == 0){
        printf("A equação não é do segundo grau.\n");
        return 1;
    }

    if(delta < 0){
        printf("A equação %fx² + %fx + %f não possui raízes reais.\n", a,b,c);
        return 1;
    }

    if (delta == 0){
        x1 = -b / (2*a);
        printf("A equação %fx² + %fx + %f possui uma raiz real: x = %.2f\n", a,b,c,x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf ("A equação %fx² + %fx + %f tem as soluções reais x1 = %.2f e x2 = %.2f\n", a,b,c,x1,x2);

    }

    return 0; 

    }
