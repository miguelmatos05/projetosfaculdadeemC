#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int funcaoface4(){

    int n, face4=0;

    printf("Quantos lançamentos?");
    scanf("%d", &n);

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        int dado = rand() % 6 + 1;  // Número de 1 a 6

        if (dado == 4) {
            face4++;
        }
    }

return face4;

}


int main(){

    int vezes;

    vezes=funcaoface4();

    printf("A face quatro saiu %d vezes", vezes);

    return 0;

}