#include <stdio.h>
#include <stdlib.h>
#define TAM tamVetor

int tamVetor;

int pares(int n, int *vet){
    
    int i;

    for (i = 0; i < TAM; i++) {
        if (vet[i] % 2 == 0)
        {
            n++;
        }
        
    }

    return n;
    
}

int main()
{
    int n, i;
    int vet[TAM];

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    tamVetor = n;

    for (i = 0; i < TAM; i++) {
        printf("Digite o %d elemento do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }
    
    printf("Numero de pares no vetor = %d", pares(0, vet));

    return 0;
}
