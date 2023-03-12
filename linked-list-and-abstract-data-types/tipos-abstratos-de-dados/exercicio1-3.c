#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct matriz
{
    int col;
    int lin;
    int mat[64][64];
} Matriz;

int transporMatriz(Matriz *mat, Matriz *mat2)
{
    int i, j;
    mat2->col = mat->lin;
    mat2->lin = mat->col;
    for (i = 0; i < mat->lin; i++)
    {
        for (j = 0; j < mat->col; j++)
        {
            mat2->mat[j][i] = mat->mat[i][j];
        }
    }
    return 0;
}
int imprimirMatriz(Matriz *mat){
    for (int i = 0; i < mat->lin; i++)
    {
        printf("\n");
        for (int j = 0; j < mat->col; j++)
            printf(("%d\t"), mat->mat[i][j]);
    }
    return 0;
}

int main(){
    Matriz mat1, mat2;
    memset(&mat1, 0, sizeof(Matriz));
    memset(&mat2, 0, sizeof(Matriz));
    mat1.col = 2;
    mat1.lin = 3;
    for (int i = 0; i < mat1.lin; i++)
    {
        for (int j = 0; j < mat1.col; j++)
            mat1.mat[i][j] = (float)rand();
    }

    printf("\nMatriz: ");
    imprimirMatriz(&mat1);
    transporMatriz(&mat1, &mat2);
    printf("\n");
    printf("\nMatriz Transposta: ");
    imprimirMatriz(&mat2);
    return 0;
}