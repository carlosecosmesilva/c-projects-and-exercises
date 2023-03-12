#include <stdio.h>
#include <stdlib.h>

struct vetor{
    float x, y, z;
};

typedef struct vetor Vetor;

int dot(Vetor *v1, Vetor *v2){

    float rX, rY, rZ, rFinal;

    rX = v1->x * v2->x; 
    rY = v1->y * v2->y;
    rZ = v1->z * v2->z;

    rFinal = rX + rY + rZ;

    printf("Rx = %g\n", rX);
    printf("Ry = %g\n", rY);
    printf("Rz = %g\n", rZ);
    printf("R Final = %g\n", rFinal);

}

int main(){

    Vetor v1 = {2, 4, 6}, v2 = {5, 7, 8};

    dot(&v1,&v2);

    return 0;
}