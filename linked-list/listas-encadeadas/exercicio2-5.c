#include <stdio.h>
struct lista
{
    int info;
    struct lista *prox;
};
typedef struct lista Lista;

Lista *inicializarLista(void)
{
    return NULL;
}

Lista *inserirLista(Lista *l, int i)
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
    {
        printf("info = % d\n", p->info);
    }
}

Lista *buscarLista(Lista *l, int v)
{
    Lista *p;
    for (p = l; p != NULL; p = p->prox)
    {
        if (p->info == v)
        {
            return p;
        }
    }
    return NULL;
}

Lista *retira_n(Lista *l, int v)
{
    Lista *ant = NULL;
    Lista *p = l;

    while (p != NULL && p->info != v)
    {
        ant = p;
        p = p->prox;
    }
    if (p == NULL)
    {
        return l;
    }
    if (ant == NULL)
    {
        l = p->prox;
    }
    else
    {
        ant->prox = p->prox;
    }
    free(p);
    return l;
}

void liberarLista(Lista *l)
{
    Lista *p = l;
    while (p != NULL)
    {
        Lista *t = p->prox;
        free(p);
        p = t;
    }
}

int main()
{
    Lista *l;
    l = inicializarLista();
    l = inserirLista(l, 23);
    l = inserirLista(l, 45);
    l = inserirLista(l, 56);
    l = inserirLista(l, 78);
    lista_imprime(l);
    l = retira_n(l, 78);
    lista_imprime(l);
    l = retira_n(l, 45);
    lista_imprime(l);
    liberarLista(l);
    return 0;
}