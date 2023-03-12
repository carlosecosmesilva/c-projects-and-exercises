#include <stdio.h>
#include <stdlib.h>

struct lista
{
	int info;
	struct Lista *prox;
};

typedef struct lista Lista;

void lista_insere(Lista **lstRef, int novaInfo)
{
	Lista *nova_Lista = (Lista *)malloc(sizeof(Lista));
	nova_Lista->info = novaInfo;
	nova_Lista->prox = (*lstRef);
	(*lstRef) = nova_Lista;
}

int comprimento(Lista *l)
{
	int cont = 0;
	Lista *atual = l;
	while (atual != NULL)
	{
		cont++;
		atual = atual->prox;
	}
	return cont;
}

int main()
{
	Lista *l = NULL;

	lista_insere(&l, 1);
	lista_insere(&l, 3);
	lista_insere(&l, 1);
	lista_insere(&l, 2);
	lista_insere(&l, 1);

	printf("Contagem das listas = %d", comprimento(l));
	return 0;
}