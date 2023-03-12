#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.141592;
typedef struct ponto
{
    float x;
    float y;
} Ponto;

Ponto *criarPontos(float x, float y)
{
    Ponto *p = (Ponto *)malloc(sizeof(Ponto));
    if (p == NULL)
    {
        printf("Memória insuficiente!\n");
        exit(1);
    }
    p->x = x;
    p->y = y;
    return p;
}
void liberarPontos(Ponto *p)
{
    free(p);
}
void acessarPontos(Ponto *p, float *x, float *y)
{
    *x = p->x;
    *y = p->y;
}

void atribuirPontos(Ponto *p, float x, float y)
{
    p->x = x;
    p->y = y;
}

Ponto *somarPontos(Ponto *p1, Ponto *p2)
{
    if (!p1 || !p2)
        return NULL;
    return criarPontos(p1->x + p2->x, p1->y + p2->y);
}

float gerarCoordenadas(Ponto *p1, Ponto *p2) {
    
    float dx, dy, r, cd;
    dx = p2->x + p1->x;
    dy = p2->y + p1->y;
    r = sqrt(dx * dx + dy * dy);
    cd = atan(dx/dy);
    cd = cd * (180.0, PI);
    
    return cd;
}

int main(){
    float x, y;
    Ponto *p1 = criarPontos(10.2, 5.1);
    acessarPontos(p1, &x, &y);
    printf("x = %.2f e y = %.2f\n", x, y);
    Ponto *p2 = criarPontos(4.3, 1.8);
    acessarPontos(p2, &x, &y);
    printf("x = %.2f e y = %.2f\n", gerarCoordenadas(p1, p2));
    liberarPontos(p1);
    liberarPontos(p2);
    return 0;
}
