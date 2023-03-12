#include <stdio.h>
#include <stdlib.h>
#define TAM tamVetor

int tamVetor;

int negativos(int n, float *vet){
    
    int i;

    for (i = 0; i < TAM; i++) {
        if (vet[i] < 0) {
            n++;
        }
    }

    return n;
    
}

int main()
{
    int n, i;
    float vet[TAM];

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    tamVetor = n;

    for (i = 0; i < TAM; i++) {
        printf("Digite o %d elemento do vetor: ", i + 1);
        scanf("%f", &vet[i]);
    }
    
    printf("Numero de negativos no vetor = %d", negativos(0, vet));

    return 0;
}
