#include <stdio.h>
#include<math.h>

int main(){

int ci,ta,n;
float ca;
 
scanf("%d", &ci);
scanf("%d", &ta);
scanf("%d", &n);


ca=ci*pow(1+(float)ta/100,n);

printf("O capital acumulado ao fim de %d anos é: %.3f", n,ca);

return 0;

}