#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[81], matricula[8], turma;
    float p1, p2, p3;
};

typedef struct aluno Aluno;

float calc_media(Aluno *a)
{
    if (a == NULL)
        return 0;
    else
        return (a->p1 + a->p2 + a->p3) / 3;
}

float media_turma(int n, Aluno **turmas, char turma) {
    float media = 0;
    Aluno *a;
    int alunos = 0;
    for (int i = 0; i < n; i++)
    {
        if (turma == turmas[i]->turma)
        {
            media = calc_media(turmas[i]);
            alunos++;
        }
        if (media >= 6){
            printf("%10s %10s %c %4.1f\n", a->matricula, a->nome, a->turma, media);
        }
    }
    return alunos ? media / alunos : 0;
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
void imprime_turma(Aluno **turmas, int n)
{
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
    } testes[] = {
        {teste1, sizeof(teste1) / sizeof(teste1[0])},
        {teste2, sizeof(teste2) / sizeof(teste2[0])}};
    int i, n;
    Aluno a;
    float m;
    n = sizeof(matriz) / sizeof(matriz[0]);

    printf("Conjunto Total de Dados:\n");
    for (i = 0; i < n; i++)
    {
        a = matriz[i];
        m = calc_media(&a);
        printf("%10s %10s %c %4.1f %4.1f %4.1f Media:%4.1f\n", a.matricula, a.nome, a.turma, a.p1, a.p2, a.p3, m);
    }
    n = sizeof(testes) / sizeof(testes[0]);

    for (i = 0; i < n; i++)
    {
        printf("\nCadastrados %d:\n", i + 1);
        imprime_turma(testes[i].t, testes[i].n);
        printf("Aprovados:\n");
        imprime_aprovados(testes[i].t, testes[i].n);
        printf("Media Turma:\n");
        media_turma(testes[i].n, testes[i].t, testes[i].n);
    }

    return 0;
}