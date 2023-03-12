#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct ponto{
    int x;
    int y;
} Ponto;

Ponto *criarPontos(int x, int y){
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
void liberarPontos(Ponto *p){
    free(p);
}
void acessarPontos(Ponto *p, int *x, int *y){
    *x = p->x;
    *y = p->y;
}

void atribuirPontos(Ponto *p, int x, int y){
    p->x = x;
    p->y = y;
}

Ponto *soma(Ponto *p1, Ponto *p2){
    if (!p1 || !p2) return NULL;
    return criarPontos(p1->x + p2->x, p1->y + p2->y);
}

int main(){
    int x, y;
    Ponto *p1 = criarPontos(10, 5);
    acessarPontos(p1, &x, &y);
    printf("x = %d e y = %d\n", x, y);
    Ponto *p2 = criarPontos(4, 1);
    acessarPontos(p2, &x, &y);
    Ponto *ps = soma(p1, p2);
    acessarPontos(ps, &x, &y);
    printf("x = %d e y = %d\n", x, y);
    liberarPontos(p1);
    liberarPontos(p2);
    return 0;
}
