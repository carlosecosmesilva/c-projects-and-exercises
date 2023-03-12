#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conta_vogais(char *str)
{
    int i, contador = 0;
    char vogais[10] = "AaEeIiOoUu";

    while (*str){
        for (i = 0; i < 10; i++){
            if (*str == vogais[i]){
                contador++;
            }
        }
        str++;
    }
    return contador;
}

int main(){

    char frase[100];

    printf("Digite uma frase:\n");
    gets(frase);
    fflush(stdin);

    printf("O numero de vogais e: %d", conta_vogais(frase));
    return 0;
}