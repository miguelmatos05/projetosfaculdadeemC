#include <stdio.h>
#include <math.h>

int conta_digitos(int n){
    
    int count = 0;
    
    if(n==0) return 1;

    while (n>0){
        
        count++;
        n/= 10;
    }

    return count;
}

int contem(int a, int b){

    int digitos_b = conta_digitos(b);
    int divisor =(int) (pow(10,digitos_b));

    while (a >= b){

        int parte = a%divisor;

        if(parte == b)
        return 1;

        a/=10;
    }

    return 0;
}

int main(){

    int a,b;

    scanf("%d", &a);
    scanf("%d", &b);

    if(contem(a,b)){
    printf("O número %d está contido em %d.\n", b,a);

    }else{
        printf("O número %d não está contido em %d.\n", b,a);
}

return 0;

}