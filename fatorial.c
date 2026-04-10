#include <stdio.h>

long long fatorial(long long);

int main(){

    long long  x=10;
    long long r=fatorial(x);

    printf("\n%lld\n", r);
    

    return 0;

}


long long fatorial(long long  n){

    static int controle=0;
    controle++;

    if(n == 1){

        printf("calculei o fatorial %d vezes\n", controle);
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}