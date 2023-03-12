#include <stdio.h>
#include <string.h>
#include <ctype.h>

int conta_char(char *str, char c){
    int i = 0, contador = 0;
    
    while(str[i] != 0){
        if(str[i] == c){
            contador++;
        }
        i++;
    }
    return contador;
}

int main(){
    char frase[100], c;
    int vezes = 0;

    printf("Digite uma frase (max 20 caracteres): ");
    gets(frase);
    fflush(stdin);

    printf("Agora digite uma letra para ver quantas vezes ela aparece na frase: ");
    scanf(" %c", &c);
    fflush(stdin);

    printf("A sua letra foi exibida %d vezes", conta_char(frase, c));

    return 0;
}
