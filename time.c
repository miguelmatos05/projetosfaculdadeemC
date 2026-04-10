#include <stdio.h>
#include <time.h>


long funcao(long n){


    long a=0, b=1, temp;

    for(long i=2; i<=n; i++){

        temp=a+b;
        a=b;
        b=temp; 
    }

    return b;
}


int main(){

    long n=100000;
    clock_t begin, end;
    double time_spent;


begin = clock();

long resultado = funcao(n);

end = clock();
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

printf("Tempo de execucao: %f segundos\n", time_spent);

    return 0;

}