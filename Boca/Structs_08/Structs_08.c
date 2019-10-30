#include <stdio.h>

struct Vetor {
    float x;
    float y;
    float z;
};
// a × b = [a2b3 − a3b2, a3b1 − a1b3, a1b2 − a2b1]

float dot (struct Vetor v1, struct Vetor v2) {
    float resultado;
    resultado = (v1.x*v2.x) + (v1.y*v2.y) + (v1.z*v2.z);
    return resultado;
}
/*
int main() {
    struct Vetor v1, v2;

    printf("Vetor 1:");
    scanf("%f", &v1.x);
    scanf("%f", &v1.y);
    scanf("%f", &v1.z);

    printf("Vetor 2:");
    scanf("%f", &v2.x);
    scanf("%f", &v2.y);
    scanf("%f", &v2.z);

    float resultado = dot(v1, v2);
    printf("%f", resultado);
    return 0;
}*/