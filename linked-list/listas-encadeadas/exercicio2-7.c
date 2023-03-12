#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int info;
    struct Lista *prox;
};
typedef struct lista Lista;

void moverLista(Lista **lstRef, int novaInfo)
{
    Lista *novoNo = (Lista *)malloc(sizeof(Lista));
    novoNo->info = novaInfo;
    novoNo->prox = (*lstRef);
    (*lstRef) = novoNo;
}

void lista_imprime(Lista *l)
{
    Lista *temp = l;
    while (temp != NULL)
    {
        printf("%d ", temp->info);
        temp = temp->prox;
    }
    printf("\n");
}

Lista *merge(Lista *l1, Lista **l2)
{
    Lista *p_ant = l1, *q_ant = *l2;
    Lista *p_prox, *q_prox;

    while (p_ant != NULL && q_ant != NULL)
    {
        p_prox = p_ant->prox;
        q_prox = q_ant->prox;

        q_ant->prox = p_prox;
        p_ant->prox = q_ant;

        p_ant = p_prox;
        q_ant = q_prox;
    }

    *l2 = q_ant;
}

int main()
{
    Lista *p = NULL, *q = NULL;
    moverLista(&p, 3);
    moverLista(&p, 2);
    moverLista(&p, 1);
    printf("Primeira Lista:\n");
    lista_imprime(p);

    moverLista(&q, 8);
    moverLista(&q, 7);
    moverLista(&q, 6);
    moverLista(&q, 5);
    moverLista(&q, 4);
    printf("Segunda Lista:\n");
    lista_imprime(q);

    merge(p, &q);

    printf("Primeira Lista modificada:\n");
    lista_imprime(p);

    printf("Segunda Lista modificada:\n");
    lista_imprime(q);

    getchar();
    return 0;
}
