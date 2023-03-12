#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
    int info;
    struct lista *prox;
} Lista;

Lista *lista_cria()
{
    return NULL;
}

Lista *lista_insere(Lista *l, int i)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

void lista_imprime(Lista *l)
{
    Lista *p;
    for (p = l; p; p = p->prox)
        printf("info = %d\n", p->info);
}

int igual(Lista *l1, Lista *l2)
{
    Lista *p1;
    Lista *p2;

    for (p1 = l1, p2 = l2; (p1) && (p2); p1 = p1->prox, p2 = p2->prox)
    {
        if (p1->info != p2->info){
            return 0;
        }
    }
    return 1;
}

Lista *lista_libera(Lista *l)
{
    Lista *p = l;
    while (p != NULL)
    {
        Lista *t = p->prox;
        free(p);
        p = t;
    }
    return NULL;
}

int main()
{
    Lista *l;
    Lista *l2;
    int n;
    l = lista_cria();
    l = lista_insere(l, 23);
    l = lista_insere(l, 45);
    l = lista_insere(l, 67);
    l = lista_insere(l, 89);
    l = lista_insere(l, 1011);
    printf("\nLista original:\n");
    lista_imprime(l);

    l2 = lista_cria();
    l2 = lista_insere(l2, 23);
    l2 = lista_insere(l2, 45);
    l2 = lista_insere(l2, 67);
    l2 = lista_insere(l2, 89);
    l2 = lista_insere(l2, 1011);

    lista_imprime(l2);

    printf("\nVerifica se os caracteres são iguais:\n");
    printf("%d", igual(l, l2));

    lista_libera(l);
    lista_libera(l2);

    getch();
    return 0;
}