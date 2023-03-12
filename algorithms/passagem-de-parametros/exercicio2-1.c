#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float *x1, float *x2)
{
    float delta;
    delta = b*b - 4 * a * c;
    *x1 = (-b - sqrt(delta)) / (2 * a);
    *x2 = (-b + sqrt(delta)) / (2 * a);
}

int main()
{
    float a, b, c, x1, x2;
    float delta;

    printf("Digite o lado a: ");
    scanf("%f", &a);
    printf("Digite o lado b: ");
    scanf("%f", &b);
    printf("Digite o lado c: ");
    scanf("%f", &c);

    raizes(a, b, c, &x1, &x2);
    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("\nDELTA = %8.2f\nNao possui raizes reais!\n\n", delta);
    }
    else
    {
        if (delta == 0)
        {
            x1 = -b / (2 * a);
            printf("\nDELTA = %8.2f \nx'   = %8.2f\n\n", delta, x1);
        }
        else if(raizes(a, b, c, &x1, &x2) != -2) {
            printf("raiz de x1: %8.2f\n", x1);
            printf("raiz de x2: %8.2fn", x2);
        }
    }
    

    return 0;
}