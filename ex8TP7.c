#include <stdio.h>
#define ALUNOS 4
#define PROVAS 2

int main(){

    int dados[ALUNOS][PROVAS+1];
    float media[ALUNOS];

    for(int i=0; i<ALUNOS; i++){
        printf("Aluno %d\n", i + 1);
        printf("  Numero mecanografico: ");
        scanf("%d", &dados[i][0]);


        for (int j = 1; j <= PROVAS; j++) {
            printf("  Nota da prova %d: ", j);
            scanf("%d", &dados[i][j]);
        }

        media[i]=(dados[i][1]+dados[i][2])/2.0f;

    }

    printf("\n%-10s %-10s %-10s %-10s\n", 
           "Numero", "Prova1", "Prova2", "Media");


    
    for(int i=0; i<ALUNOS; i++){
        printf("%-10d %-10d %-10d %-10.2f\n", dados[i][0], dados[i][1], dados[i][2], media[1]);

    }

    return 0;

}