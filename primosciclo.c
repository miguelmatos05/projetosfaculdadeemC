#include <stdio.h>
#include <math.h>

int main(){

    int n, num = 2, count = 0; ;

    printf("Insira o número de números primos que pretende: \n");
    scanf("%d", &n);

    printf("Os %d primeiros números primos são: \n", n);


    while(count < n){
        int i, primo = 1;
        for(i=2; i<=sqrt(num); i++){
            if(num % i == 0){
                primo = 0;
                break;
            }
        }

    if(primo){
        printf("%d\n", num);
        count++;
    }

    num++;

}

    printf("\n");
    return 0;


}