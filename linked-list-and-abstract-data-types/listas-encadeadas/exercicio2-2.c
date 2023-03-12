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
	Lista *novoNo = (Lista *)malloc(sizeof(Lista));
	novoNo->info = novaInfo;
	novoNo->prox = (*lstRef);
	(*lstRef) = novoNo;
}

int maiores(Lista *l, int n)
{

	Lista *atual = l;
	int cont = 0;

	while (atual != NULL)
	{
		if (cont == n)
			return (atual->info);
		cont++;
		atual = atual->prox;
	}
}

int main()
{
	Lista *l = NULL;

	lista_insere(&l, 1);
	lista_insere(&l, 4);
	lista_insere(&l, 1);
	lista_insere(&l, 12);
	lista_insere(&l, 1);

	printf("\nO elemento no indice 3 eh: %d", maiores(l, 3));
	return 0;
}