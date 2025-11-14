#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int n, i, face4=0;

    printf("Quantos lançamentos?");
    scanf("%d", &n);

    srand(time(NULL));

     for (i = 0; i < n; i++) {
        int dado = rand() % 6 + 1;  // Número de 1 a 6

        if (dado == 4) {
            face4++;
        }
    }

    printf("A face quatro saiu %d vezes", face4);


  return 0;


}