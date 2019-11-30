#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_TAM 100

typedef struct intGrande
{
    int vec[MAX_TAM];
    int tam;
} tIntGrande;

tIntGrande lerNumero() {
    tIntGrande num;
    scanf("%s", (char*) num.vec);
    return num;
}

void imprimeNumero(tIntGrande numero) {
    for (int i = 0; i <= numero.tam; i++) {
        printf("%d", numero.vec[i]);
    }
}

int main(int argc, char const *argv[])
{
    tIntGrande num1 = lerNumero();
    tIntGrande num2 = lerNumero();

    imprimeNumero(num1);
    imprimeNumero(num2);

    return 0;
}

// Exemplo de entrada:
// 9234158769222222890910482038230 9234158769222222890910482038230
// 769222222890910482038230 9234158769222222890910482038230
// 9234158769222222890910482038230 8234158769222222890910482038230

// Exemplo de saída:
// IGUAL
// MENOR
// MAIOR