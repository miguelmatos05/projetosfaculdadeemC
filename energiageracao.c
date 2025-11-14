#include <stdio.h>

int main() {
    int dia, quantidadedeenergia;
    float hora;
    int primeiro = 1;
    int quantidadetotaldia = 0, diamaiorproducao = 0;
    int totalenergia = 0;
    float totalhoras = 0;
    float eficienciamedia;
    int dias = 0;
    int somaenergia_dias = 0;

    printf("Dia  Energia(kWh)  Horas  Eficiência (kWh/hora)\n");

    while (scanf("%d %d %f", &dia, &quantidadedeenergia, &hora) == 3) {

        if (hora != 0)
            eficienciamedia = quantidadedeenergia / hora;
        else
            eficienciamedia = 0;

        printf("%3d       %10d       %5.2f          %7.2f\n", dia, quantidadedeenergia, hora, eficienciamedia);

        
        if (primeiro || quantidadedeenergia >= quantidadetotaldia) {
            quantidadetotaldia = quantidadedeenergia;
            diamaiorproducao = dia;
            primeiro = 0;
        }

        totalenergia += quantidadedeenergia;   
        totalhoras += hora;                     
        somaenergia_dias += quantidadedeenergia; 
        dias++;                                 
    }

    float media_diaria = 0;
    if (dias > 0)
        media_diaria = (float)somaenergia_dias / dias;

    printf("Média diária de energia solar produzida: %.2f kWh\n", media_diaria);
    printf("Dia com maior produção de energia: %d com %d kWh\n", diamaiorproducao, quantidadetotaldia);

    return 0;
}