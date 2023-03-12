#include <stdio.h>
#include <stdlib.h>

void shift_string( char *str){
    int i = 0;

    while (str[i] != 0){
        
        if (str[i] == 'z'){
            str[i] = 'a';
        }
        else if (str[i] == 'Z'){
            str[i] = 'A';
        }
        else if (str[i] >= 'a' && str[i] < 'z'){
            str[i]++;
        }
        else if (str[i] == 'A' && str[i] < 'Z'){
            str[i]++;
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
    shift_string(frase);
    printf(frase);
}