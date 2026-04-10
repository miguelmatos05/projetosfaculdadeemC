#include <stdio.h>
#include <math.h>


double f(double a, double x) {
    return a * x * x; 
}

int main() {
    double a, x_inferior, x_superior, incremento;

    
    printf("Digite o valor de a: ");
    scanf("%lf", &a);

    printf("Digite o limite inferior do intervalo: ");
    scanf("%lf", &x_inferior);

    printf("Digite o limite superior do intervalo: ");
    scanf("%lf", &x_superior);

    printf("Digite o incremento: ");
    scanf("%lf", &incremento);

    printf("\nValores de f(x) = %.2lf * x^2 no intervalo [%.2lf, %.2lf] com incremento %.2lf:\n", a, x_inferior, x_superior, incremento);

    
    for (double x = x_inferior; x <= x_superior; x += incremento) {
        printf("x = %.2lf, f(x) = %.2lf\n", x, f(a, x));
    }

    return 0;
}