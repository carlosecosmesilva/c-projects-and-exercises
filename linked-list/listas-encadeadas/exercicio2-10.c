#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
    int info;
    struct lista *prox;
} Lista;

void lista_imprime(Lista *l)
{
    Lista *ptr = l;
    while (ptr)
    {
        printf("%d -> ", ptr->info);
        ptr = ptr->prox;
    }

    printf("NULL");
}

void lista_insere(Lista **lstRef, int info)
{

    Lista *novoNo = (Lista *)malloc(sizeof(Lista));
    novoNo->info = info;
    novoNo->prox = *lstRef;
    *lstRef = novoNo;
}

Lista *copia(Lista *l)
{
    if (l == NULL)
    {
        return NULL;
    }
    else
    {
        Lista *novoNo = (Lista *)malloc(sizeof(Lista));
        novoNo->info = l->info;
        novoNo->prox = copia(l->prox);
        return novoNo;
    }
}

Lista *create(int array[], int N)
{

    Lista *lstRef = NULL;

    for (int i = N - 1; i >= 0; i--)
    {

        lista_insere(&lstRef, array[i]);
    }

    return lstRef;
}

void imprimirListas(Lista *lstRef, Lista *dup)
{

    printf("Lista Original: ");

    lista_imprime(lstRef);

    printf("\nCopia da Lista: ");

    lista_imprime(dup);
}

int main()
{

    int array[] = {1, 2, 3, 4, 5};
    int N = sizeof(array) / sizeof(array[0]);

    Lista *lstRef = create(array, N);

    Lista *dup = copia(lstRef);

    imprimirListas(lstRef, dup);

    return 0;
}
