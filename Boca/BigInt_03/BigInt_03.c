//
// Created by Pichau on 30/11/2019.
//
#include <stdio.h>
#include <string.h>

#define MAX_TAM 100

typedef struct intGrande
{
    int vec[MAX_TAM];
    int tam;
} tIntGrande;

// Declarações
void tamanhoBigInt(tIntGrande num);
tIntGrande string2BigInt(char * palavra);
void imprimeBigInt(tIntGrande num);
tIntGrande inicializaBigInt(tIntGrande *um);
tIntGrande criaUm();
tIntGrande subtrator(tIntGrande num1, tIntGrande num2);


// Funções
void tamanhoBigInt(tIntGrande num) {
    printf("tamanho: %d\n", num.tam);
}

tIntGrande inicializaBigInt(tIntGrande *num) {
    for (int i = 0; i < MAX_TAM; ++i) {
        (*num).vec[i] = 0;
    }
    return (*num);
}

void imprimeBigInt(tIntGrande num) {
    for (int i = num.tam; i > 0; --i) {
        printf("%d", num.vec[i - 1]);
    }
}

tIntGrande string2BigInt(char *palavra) {
    tIntGrande num;
    num.tam = (int) strlen(palavra);

    inicializaBigInt(&num);

    for (int i = 0; i < num.tam; ++i) {
        num.vec[num.tam-i-1] = (palavra[i] - '0');
    }

    return num;
}

tIntGrande criaUm() {
    tIntGrande um;
    um.tam = 1;
    um = inicializaBigInt(&um);
    um.vec[0] = 1;
    return um;
}

tIntGrande subtrator(tIntGrande num1, tIntGrande num2) {
    tIntGrande num_subtrato;
    inicializaBigInt(&num_subtrato);
    num_subtrato.tam = (num1.tam > num2.tam) ? num1.tam : num2.tam;



    return num_subtrato;
}


int main(int argc, char *argv[]) {
    char palavra1[MAX_TAM];
//    char palavra2[MAX_TAM];
    tIntGrande numero1;
    tIntGrande numero2;

    scanf("%s", palavra1);
    numero1 = string2BigInt(palavra1);
    tamanhoBigInt(numero1);
    imprimeBigInt(numero1);
    printf("\n");

//    scanf("%s", palavra2);
//    numero2 = string2BigInt(palavra2);
//    tamanhoBigInt(numero2);
    numero2 = criaUm();
    imprimeBigInt(numero2);
    printf("\n");

    tIntGrande subtrato = subtrator(numero1, numero2);
    imprimeBigInt(subtrato);

    return 0;
}