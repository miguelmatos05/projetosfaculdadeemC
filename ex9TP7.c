#include <stdio.h>
#define ALUNOS 4
#define PROVAS 2

void ordena(float notas[][2], int N){

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (notas[j][1] > notas[i][1]) {  
                float temp0 = notas[i][0];
                float temp1 = notas[i][1];

                notas[i][0] = notas[j][0];
                notas[i][1] = notas[j][1];

                notas[j][0] = temp0;
                notas[j][1] = temp1;
            }
        }
    }
}

int main(){

    int dados[ALUNOS][PROVAS+1];
    float notas[ALUNOS][2];

    for(int i=0; i<ALUNOS; i++){
        printf("Aluno %d\n", i + 1);
        printf("  Numero mecanografico: ");
        scanf("%d", &dados[i][0]);


        for (int j = 1; j <= PROVAS; j++) {
            printf("  Nota da prova %d: ", j);
            scanf("%d", &dados[i][j]);
        }


        notas[i][0] = dados[i][0];
        notas[i][1]=(dados[i][1]+dados[i][2])/2.0f;


        ordena(notas, ALUNOS);

    }

    printf("\n%-10s %-10s\n", "Numero", "Media");


    
    for(int i=0; i<ALUNOS; i++){
        printf("%-10.0f %-10.2f\n", notas[i][0], notas[i][1]);

    }

    return 0;

}