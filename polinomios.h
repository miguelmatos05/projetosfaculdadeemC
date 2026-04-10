#ifndef POLINOMIOS_H
#define POLINOMIOS_H

#define MAX_GRAU 10


int lerPoli(int *poli);
void escrevePoli(int *poli, int grau);
void adicionaPoli(int *p1, int *p2, int *pRes, int maiorGrau);
float calc(int *poli, int grau, float x);

#endif
