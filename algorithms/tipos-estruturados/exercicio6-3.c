#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
};

typedef struct aluno Aluno;

float calc_media(Aluno *a){
    if (a == NULL)
        return 0;
    else
        return (a->p1 + a->p2 + a->p3) / 3;
}
void imprime_aprovados(Aluno **turmas, int n)
{
    int i;
    Aluno *a;
    float media;
    for (i = 0; i < n; i++)
    {
        a = turmas[i];
        if (a != NULL)
        {
            media = calc_media(a);
            if (media >= 6)
                printf("%10s %10s %c %4.1f\n", a->matricula, a->nome, a->turma, media);
        }
    }
}
void imprime_turma(Aluno **turmas, int n){
    int i;
    Aluno *a;
    for (i = 0; i < n; i++)
    {
        a = turmas[i];
        if (a != NULL)
            printf("%10s %10s %c %4.1f %4.1f %4.1f\n", a->matricula, a->nome, a->turma, a->p1, a->p2, a->p3);
    }
}

int main(void)
{
    Aluno matriz[] =
        {
            {"Carlos", "9876543", 'B', 9., 10., 6.},
            {"Marcos", "9878778", 'A', 1., 3., 6.},
            {"Leandro", "9009808", 'C', 9., 5.9, 9.4},
            {"Darwin", "6686888", 'B', 0., 2., 7.},
        };
    Aluno *teste1[] = {NULL, matriz, NULL, NULL, NULL, NULL, NULL, matriz + 3};
    Aluno *teste2[] = {matriz, matriz + 1, NULL, matriz + 2, matriz + 3, NULL};
    
    struct
    {
        Aluno **t;
        int n;
    } testes[] ={
                {teste1, sizeof(teste1) / sizeof(teste1[0])},
                {teste2, sizeof(teste2) / sizeof(teste2[0])}};
    int i, n;
    Aluno a;
    float m;
    n = sizeof(matriz) / sizeof(matriz[0]);

    printf("Conjunto Total de Dados:\n");
    for (i = 0; i < n; i++) {
        a = matriz[i];
        m = calc_media(&a);
        printf("%10s %10s %c %4.1f %4.1f %4.1f Media:%4.1f\n",a.matricula,a.nome,a.turma,a.p1,a.p2,a.p3,m);
    }
    n = sizeof(testes) / sizeof(testes[0]);
    
    for (i = 0; i < n; i++) {
        printf("\nTESTE %d:\n", i + 1);
        imprime_turma(testes[i].t, testes[i].n);
        printf("Aprovados:\n");
        imprime_aprovados(testes[i].t, testes[i].n);
        printf("\n");
    }

    return 0;
}