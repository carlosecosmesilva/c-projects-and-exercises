#include <stdio.h>
#include <stdlib.h>

void calc_esfera(float r, float *area, float *volume){
    float pi = 3.14159265;
    *area = pi * (r * r);
    *volume = 2 * pi * r;
}

int main(){

    float raio, circu, a;
    float *circunferencia, *area;

    circunferencia = &circu;

    area = &a;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    calc_esfera(raio, circunferencia, area);

    printf("Area do circulo = %.2f\n", a);
    printf("Circunferencia do circulo = %.2f\n", circu);

    return 0;
}
