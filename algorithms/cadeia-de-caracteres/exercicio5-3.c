#include <stdio.h>
#include <stdlib.h>

void minusculo(char *str){
    int i, contador = 0;
    int converte = 'A' - 'a';

    while (str[i] != 0){
        
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] + converte;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] - converte;
        }
        i++;
    }
}

int main(){
    char frase[100];

    printf("Digite uma frase: ");
    gets(frase);
    fflush(stdin);

    printf("\nSua frase aparecera substituindo as letras minusculas para maiusculas:\n");
    minusculo(frase);
    printf(frase);

    return 0;
}