#include <stdio.h> 
#include <stdlib.h>
#define TAM tamVetor

int tamVetor;

int inverter(int vet[TAM], int n){
    int i;

    printf("\nVetor em ordem inversa: \n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d\n", vet[i]);
    }
    return 0;
}

int main(){
    int i, n;
    int vet[TAM];

    printf("Digite o tamanho do Vetor: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        printf("\nDigite o elemento %d do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    inverter(vet, n);
}
