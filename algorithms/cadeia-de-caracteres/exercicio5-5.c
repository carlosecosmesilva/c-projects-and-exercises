#include <stdio.h>
#include <stdlib.h>

void string_oposta(char *str){
    int i = 0;

    while (str[i] != 0){

        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = 'z' - str[i] + 'a';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = 'Z' - str[i] + 'A';
        }
        i++;
    }
}

int main(){
    char frase[100];

    printf("Digite uma frase: ");
    gets(frase);
    fflush(stdin);

    printf("\nSua frase aparecera substituindo as letras:\n");
    string_oposta(frase);
    printf(frase);
}