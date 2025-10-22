#include <stdio.h>

int main(){

    int a;

    printf("Número?");
    scanf("%d", &a);

    if (a%2==0){
        printf("%d é par.", a);
    }

    else{
     printf("%d é impar.", a);
    }

    return 0;
}

