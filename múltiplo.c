#include <stdio.h>
#include <math.h>

int main(){

int a,b;


printf("Digite o primeiro número:  \n");
scanf("%d", &a);

printf("Digite o segundo número:  \n");
scanf("%d", &b);

if( b==0 || a==0){
   printf("Não é possível verificar múltiplos com zero.\n");
   return 1;
}


if(a % b == 0){
   printf("%d é múltiplo de %d.\n", a,b);
   
}
else if(b % a == 0 ){
   printf("%d é múltiplo de %d.\n", b,a);
   
}

else{
   printf("Os números não são múltiplos entre si.\n");
   
}

return 0; 


}




