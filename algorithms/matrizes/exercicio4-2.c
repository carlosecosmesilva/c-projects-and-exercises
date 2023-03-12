#include <stdio.h>
#include <stdlib.h>

const int N = 5;
typedef struct matriz{
    int *aux;
    int tam;
} Matriz;

void definirMatriz(Matriz *m, int i,int j, int x){
    if (i >= j){
        m->aux[((m->tam) * (j - 1) - (((j - 2) * (j - 1)) / 2) + (i - j))] = x;
    }
}

int capturarMatriz(Matriz m, int i, int j){
    if (i >= j)
        return m.aux[((m.tam) * (j - 1) - (((j - 2) * (j - 1)) / 2) + (i - j))];
    else
        return 0;
}

void exibirMatriz(Matriz m){
    for (int i = 1; i <= m.tam; i++){
        for (int j = 1; j <= m.tam; j++){
            if (i >= j)
                printf("%d ",
                       m.aux[((m.tam) * (j - 1) - (((j - 2) * (j - 1)) / 2) + (i - j))]);
            else
                printf("0");
        }
        printf("\n");
    }
}

Matriz criarMatriz(int Mat[N][N]){
    Matriz mat;
    mat.tam = N;
    mat.aux = (int *)malloc(mat.tam * (mat.tam + 1) / 2 * sizeof(int));
    for (int i = 1; i <= mat.tam; i++)
    {
        for (int j = 1; j <= mat.tam; j++){
            definirMatriz(&mat, i, j, Mat[i - 1][j - 1]);
        }
    }
    return mat;
}

int main(){
    int Mat[5][5] = {{1, 0, 0, 0, 0},
                     {1, 2, 0, 0, 0},
                     {1, 2, 3, 0, 0},
                     {1, 2, 3, 4, 0},
                     {1, 2, 3, 4, 5}};

    Matriz mat = criarMatriz(Mat);
    exibirMatriz(mat);

    return 0;
}
