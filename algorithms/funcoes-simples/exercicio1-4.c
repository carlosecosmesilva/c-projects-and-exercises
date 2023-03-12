#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int soma_impares(int n)
{
    int soma, i;
    for (i = 1; i < (n * 2); i++)
    {
        if (i % 2 == 1) {
            soma = soma + i;
        }
    }
    return soma;
}

int main()
{
    int quantidade, somaTotal;
    printf("Soma dos numeros impares!\n");
    printf("Digite a quantidade de numeros impares que voce deseja que seja somada: ");
    scanf("%d", &quantidade);
    somaTotal = soma_impares(quantidade);
    printf("A soma eh igual a: %d\n", somaTotal);
    return 0;
}
