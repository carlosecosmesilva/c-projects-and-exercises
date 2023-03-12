#include <stdio.h>
#include <math.h>

void deriva(float *poli, int grau, float *out){
    int i;

    for (i = 0; i < grau; ++i){
        out[i] = i * poli[i];
    }
}

int main() {
    float polinomio[4] = {1, 2, 3, 4};
    float dpoldx[4];
    int i;
    
    deriva(polinomio, 4, dpoldx);
    
    printf("Entrada dos dados do polinomio: ");
    printf("%.2f .x^%d ", polinomio[3], 3);
    for (i = 2; i >= 0; --i){
        printf(" + %.2f .x^%d", polinomio[i], i);
    }

    printf("\nResposta: ");
    
    printf("%.2f .x^%d\n", dpoldx[3], 2);
    for (i = 2; i >= 1; ++i){
        printf(" + %.2f .x^%d\n", dpoldx[i], i - 1);
    }

    printf("\n");
    return 0;
}