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
    for (p = l; p != NULL; p = p->prox)
        printf("info = %d\n", p->info);
}

Lista *separa(Lista *l, int n)
{
    Lista *p;
    Lista *q;

    for (p = l; p != NULL; p = p->prox){
        if (p->info == n)
        {
            q = p->prox;
            p->prox = NULL;
            return q;
        }
    }

    return NULL;
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

    l2 = lista_insere(l, 30);
    l2 = lista_insere(l, 44);
    l2 = lista_insere(l, 69);
    l2 = lista_insere(l, 90);
    l2 = lista_insere(l, 1013);

    printf("\nEntre com o valor do no a ser separado : ");
    scanf("%d", &n);
    l2 = separa(l, n);

    printf("\nLiberando a memoria...\n");
    l = lista_libera(l);

    printf("\nLista depois da separacao:\n");
    lista_imprime(l2);

    getch();
}