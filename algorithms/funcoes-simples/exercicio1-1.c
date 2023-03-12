#include <stdio.h>
#include <stdlib.h>

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y) {
    int retangulo;
    if ((x0 <= x) && (x1 >= x) && (y0 <= y) && (y1 >= y))
    {
        retangulo = 1;
    }
    else
    {
        retangulo = 0;
    }

    return retangulo;
}

int main(void)
{
    int x0, y0, x1, y1, x, y;

    printf("Digite a posicao do ponto x0: ");
    scanf("%d", &x0);
    printf("Digite a posicao do ponto y0: ");
    scanf("%d", &y0);
    printf("Digite a posicao do ponto x1: ");
    scanf("%d", &x1);
    printf("Digite a posicao do ponto y1: ");
    scanf("%d", &y1);
    printf("Digite a posicao do ponto x: ");
    scanf("%d", &x);
    printf("Digite a posicao do ponto y: ");
    scanf("%d", &y);

    printf("A resposta e: %d", dentro_ret(x0, y0, x1, y1, x, y));
    return 0;
}

