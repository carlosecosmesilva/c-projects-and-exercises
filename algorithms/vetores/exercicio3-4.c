#include <stdio.h>
#include <stdlib.h>
#define TAM 10

double avalia(double *poli, int grau, double x){
    int i, power;
    float poliSoma;
    poliSoma = poli[0];
    
    for (i = 1; i <= grau; i++) {
        poliSoma = poliSoma * x + poli[i];
    }

    power = grau;

    printf("O polinomio e: \n");
    for (i = 0; i <= grau; i++)
    {
        if (power < 0){
            break;
        }
        if (poli[i] > 0){
            printf(" + ");

        } else if (poli[i] < 0){
            printf(" - ");

        } else {
            printf(" ");
        }

        printf("%dx^%d", abs(poli[i]), power--);
    }

    printf("\nA soma do polinômio e = %6.2f \n", poliSoma);
}

int main(){
    int poli[TAM];
    int i, grau, power;
    float x, poliSoma;

    printf("Digite a ordem do polinomio: \n");
    scanf("%d", &grau);
    printf("Digite o valor de x: \n");
    scanf("%f", &x);

    printf("Insira o %d coeficiente: \n", grau + 1);
    for (i = 0; i <= grau; i++){
        scanf("%d", &poli[i]);
    }

    avalia(poli, grau, x);
}
