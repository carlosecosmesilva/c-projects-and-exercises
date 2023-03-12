#include <stdio.h>
#include <stdlib.h>

void roda_string(char *str){

    int tamanho = strlen(str);
    int i, j, contador;

    for (i = 0, j = tamanho - 1; i < j; i++, j--){
        contador = str[i];
        str[i] = str[j];
        str[j] = contador;
    }

    return str;
}

int main(){
    char frase[100];

    printf("Digite uma frase: ");
    gets(frase);
    fflush(stdin);

    printf("\nSua frase aparecera invertendo a ordem das letras:\n");
    roda_string(frase);
    printf(frase);
}