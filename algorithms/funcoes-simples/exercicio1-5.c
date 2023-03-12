#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pi (int n) {
    double p = 0;
    double i;

    for (i = 0; i < n; i++)
    {
        p += ((pow(-1, i)) / ((2 * i) + 1));
    }
    p *= 4;
}

int main(){

    double n;
    printf("Calculando a aproximacao de pi de acordo a formula de Leibniz\n");
    printf("\nDigite o numero para retornar a aproximaxacao do valor de pi: ");
    scanf("%f", &n);

    
    printf("O valor aproximado de pi eh 5 (ou %.2f)\n", pi(n));
    return 0;
}
