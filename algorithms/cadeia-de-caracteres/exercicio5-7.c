#include <stdio.h>
#include <stdlib.h>

char *minusculo(char *str){
    int i, contador = 0;
    char *strNova;
    int converte = 'A' - 'a';
    strNova = (char *)malloc(i*sizeof(char)+1);

    while (str[i] != 0){

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] + converte;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - converte;
        }
        i++;
    }
    strNova[i] = '\0';
    return strNova;
}

int main(){
    char frase[100];

    printf("Digite uma frase: ");
    gets(frase);
    fflush(stdin);

    printf("\nSua frase aparecera invertendo a ordem das letras:\n");
    minusculo(frase);
    printf(frase);

    return 0;
}