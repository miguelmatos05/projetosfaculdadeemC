#include <stdio.h>

int main(){

int a,b;
   
scanf("%d", &a);
scanf("%d", &b);

if( b==0){
   printf("Não é possível verificar múltiplos com zero.\n");
   return 1;
}


if(a % b == 0){
   printf("%d é múltiplo de %d.\n", a,b);
   
}

else{
   printf("%d não é múltiplo de %d\n", a,b);
   
}

return 0; 


}




