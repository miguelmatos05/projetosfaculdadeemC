#include <stdio.h>
#include <math.h>

unsigned long long fatorial(int n) {
    if (n < 0) {
        printf("Fatorial nao definido para numeros negativos.\n");
        return 0;
    }

    unsigned long long resultado = 1;

    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}


double seno(double x, double tolerancia){
     
     double soma = 0.0;
     int n = 0 ;
     double termo;

     do{

        termo = pow(-1, n) * pow(x, 2*n + 1) / fatorial(2*n + 1);

         if (fabs(termo) < tolerancia) break;

         soma+=soma;
         n++;
         
     }

     while(1);

    return soma;
}


int main() {
    
    double x,tolerancia;

    printf("Digite o valor do ângulo em radianos:\n ");
    scanf("%lf", &x);

    printf("Digite a tolerancia:\n ");
     scanf("%lf", &tolerancia);

       double resultado = seno(x, tolerancia);
    printf("sin(%.4lf) ≈ %.10lf\n", x, resultado);


    printf("Valor real usando sin(): %.10lf\n", sin(x));

    return 0;

}
