#include <stdio.h>
#include <stdlib.h>

struct Lista
{
	int info;
	struct Lista *prox;
};

void lista_insere(struct Lista **lstRef, int novaInfo)
{
	struct Lista *novo_No = (struct Lista *)malloc(sizeof(struct Lista));
	novo_No->info = novaInfo;
	novo_No->prox = (*lstRef);
	(*lstRef) = novo_No;
}

int ultimo(struct Lista *l){

	struct Lista *atual = l;
	int cont = 0;

	if (atual == NULL || atual->prox == NULL){
		return -1;
	}

	while (atual != NULL){
		if (atual->prox->prox->prox->prox == NULL){
			return atual->info;
		}
		atual = atual->prox;
	}
	
}

int main(){
	struct Lista *l = NULL;

	lista_insere(&l, 12);
	lista_insere(&l, 29);
	lista_insere(&l, 11);
	lista_insere(&l, 23);

	printf("\nO ultimo elemento eh: %d", ultimo(l));
	return 0;
}