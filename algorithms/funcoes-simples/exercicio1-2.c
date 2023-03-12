#include <stdlib.h>
#include <stdio.h>

int primo(int n)
{
    int i, contador = 0;
    for (i = 1; i < n + 1; i++)
    {
        if (n % i == 0)
        {
            contador = contador + 1;
        }
    }
    if (contador == 2)
    {
        return 1;
    }
    else if (contador > 2)
    {
        return 0;
    }
}

int main()
{
    int n, resultado;
    printf("Digite um numero para saber se ele e primo ou nao: ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("O numero %d e primo", n);
    }
    else
    {
        resultado = primo(n);
        if (resultado == 1)
        {
            printf("O numero %d e primo", n);
        }
        else if (resultado == 0)
        {
            printf("O numero %d nao e primo", n);
        }
    }
    return 0;
}
