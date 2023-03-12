#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
    float x, y;
} Vetor;

int dentroRet(Vetor *v1, Vetor *v2, Vetor *p)
{
    int r;
    if (p->x > v1->x && p->x < v2->x && p->y > v1->y && p->y < v2->y){
        r = 1;
    } else {
        r = 0;
    }

    printf("%d", r);
}

int main(){

    Vetor v1 = {2, 4}, v2 = {5, 7}, p = {3, 5};

    dentroRet(&v1, &v2, &p);
}