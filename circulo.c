#include <stdio.h>

int main(){
 
 float R,P,A;

printf("Raio?\n");
 scanf("%f", &R);

P=2*3.1416*R;

printf("Perimetro = %.4f\n", P);

A=3.1416*R*R;

printf("Area = %.4f\n", A);

return 0; 


}