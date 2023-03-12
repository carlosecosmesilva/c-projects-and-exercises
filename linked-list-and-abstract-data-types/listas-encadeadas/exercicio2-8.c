#include <stdio.h>
#include <stdlib.h>

#define MALLOC(a) (a *)malloc(sizeof(a))

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
    Lista *novo = MALLOC(Lista);
    novo->info = i;
    novo->prox = l;
    return novo;
}

void lista_imprime(Lista *l)
{
    Lista *aux;
    for (aux = l; aux != NULL; aux = aux->prox){
        printf("info = %d\n", aux->info);
    }
}

Lista *inverte(Lista *l)
{

    Lista *nova = lista_cria();
    Lista *p;

    for (p = l; p; p = p->prox){
        nova = lista_insere(nova, p->info);
    }
    return nova;
}

int main(void)
{
    Lista *l;

    l = lista_cria();
    l = lista_insere(l, 23);
    l = lista_insere(l, 45);
    l = lista_insere(l, 67);
    l = lista_insere(l, 89);
    l = lista_insere(l, 1011);

    printf("\nLista:\n");
    lista_imprime(l);

    Lista *invertida = inverte(l);
    printf("\nLista invertida:\n");

    lista_imprime(invertida);

    getch();
    return 0;
}