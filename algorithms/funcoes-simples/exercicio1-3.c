#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    int termo1, termo2, termo3, i;
    termo1 = 1;
    termo2 = 1;

    printf(" %d  %d", termo1, termo2);

    for (i = 0; i < n-2; i++) {
        termo3 = termo1 + termo2;
        printf(" %d", termo3);
        termo1 = termo2;
        termo2 = termo3;
    }
    
}

int main(){

    int n;
    printf("Digite a quantidade de termos que deseja ver da sequencia fibonacci: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}