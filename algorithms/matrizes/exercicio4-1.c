#include<stdio.h>

int verifica_matriz(int a[4][4], int b[4][4]){
    int lin, col, i, j, cont = 0;
    
    for (lin = 0; lin < i; lin++){
        for (col = 0; col < j; col++) {
            b[col][lin] = a[lin][col];
        }
    }

    for (lin = 0; lin < i; lin++){
        for (col = 0; col < j; col++){
            if (a[lin][col] != b[lin][col]){
                cont++;
                break;
            }
        }
    }
    if (cont == 1)
    {
        printf("\nMatriz Simetrica.");
    }
    else
    {
        printf("\nMatriz Nao Simetrica.");
    }
}
int main()
{
 	int i, j, lin, col, a[4][4], b[4][4], cont = 1;

    printf("\nDigite o numero de linhas e colunas :  ");
    scanf("%d %d", &i, &j);

    printf("\nDigite os elementos da matriz \n");
    for(lin = 0; lin < i; lin++)
  	{
   		for(col = 0;col < j;col++)
    	{
      		scanf("%d", &a[lin][col]);
    	}
  	}

    verifica_matriz(a[lin][col], b[lin][col]);
   	

 	return 0;
}