#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
struct lista
{
	int info;
	struct Lista *prox;
};

typedef struct lista Lista;

Lista *concatenar(Lista *l1, Lista *l2)
{
	Lista tmp;
	Lista *ant = &tmp;
	tmp.prox = NULL;
	while (1)
	{
		if (l1 == NULL)
		{
			ant->prox = l2;
			break;
		}
		else if (l2 == NULL)
		{
			ant->prox = l1;
			break;
		}
		if (l1->info <= l2->info)
			moverNo(&(ant->prox), &l1);
		else
			moverNo(&(ant->prox), &l2);

		ant = ant->prox;
	}
	return (tmp.prox);
}

void moverNo(Lista **lstRef, Lista **lstBusca)
{
	Lista *novaLista = *lstBusca;
	assert(novaLista != NULL);
	*lstBusca = novaLista->prox;
	novaLista->prox = *lstRef;
	*lstRef = novaLista;
}

void lista_insere(Lista **lstRef, int novaInfo)
{
	Lista *novaLst = (Lista *)malloc(sizeof(Lista));
	novaLst->info = novaInfo;
	novaLst->prox = (*lstRef);
	(*lstRef) = novaLst;
}

void lista_imprime(Lista *no)
{
	while (no != NULL)
	{
		printf("%d ", no->info);
		no = no->prox;
	}
}

int main()
{
	Lista *res = NULL;
	struct Lista *l1 = NULL;
	struct Lista *l2 = NULL;

	lista_insere(&l1, 15);
	lista_insere(&l1, 10);
	lista_insere(&l1, 5);

	lista_insere(&l2, 20);
	lista_insere(&l2, 3);
	lista_insere(&l2, 2);

	res = concatenar(l1, l2);

	printf("Lista concatenada: \n");
	lista_imprime(res);

	return 0;
}
