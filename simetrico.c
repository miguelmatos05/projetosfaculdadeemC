#include <stdio.h>
#include <stdlib.h>

int main(){

int a,b;

printf("Número 1?\n");
scanf("%d", &a);

printf("Número 2?\n");
scanf("%d", &b);

if(b== -(abs(a))){
    printf("Os números são simétricos.");
}

else{
    printf("Os números não são simétricos.");
}

return 0;

}


