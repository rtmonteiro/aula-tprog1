//
// Created by Pichau on 24/11/2019.
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
void tamanhoPalavra(const char *palavra2);
tIntGrande string2BigInt(char * palavra);
void imprimeNumero(tIntGrande num);
tIntGrande inicializaBigInt(tIntGrande *um);
tIntGrande criaUm();
tIntGrande somador(tIntGrande num1, tIntGrande num2);


// Funções
void tamanhoPalavra(const char *palavra2) {
    printf("tamanho: %d\n", strlen(palavra2));
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

void imprimeNumero(tIntGrande num) {
    for (int i = num.tam; i > 0; --i) {
        printf("%d", num.vec[i - 1]);
    }
}

tIntGrande inicializaBigInt(tIntGrande *um) {
    for (int i = 1; i < MAX_TAM; ++i) {
        (*um).vec[i] = 0;
    }
    return (*um);
}

tIntGrande criaUm() {
    tIntGrande um;
    um.tam = 1;
    um.vec[0] = 1;
    um = inicializaBigInt(&um);
    return um;
}

tIntGrande somador(tIntGrande num1, tIntGrande num2) {
    tIntGrande num_soma;
    inicializaBigInt(&num_soma);
    num_soma.tam = (num1.tam > num2.tam) ? num1.tam : num2.tam;

    int dezena = 0;

    for (int i = 0; i < num_soma.tam; ++i) {
        int soma = num1.vec[i] + num2.vec[i] + dezena;
        num_soma.vec[i] = soma % 10;
        dezena = soma / 10;
    }

    if (dezena > 0){
        ++num_soma.tam;
        num_soma.vec[num_soma.tam - 1] = dezena;
    }


    return num_soma;
}


int main(int argc, char *argv[]) {
    char palavra1[MAX_TAM];
    char palavra2[MAX_TAM];
    tIntGrande numero1;
    tIntGrande numero2;

    scanf("%s", palavra1);
//    tamanhoPalavra(palavra1);
    numero1 = string2BigInt(palavra1);
//    imprimeNumero(numero1);
//    printf("\n");

//    scanf("%s", palavra2);
//    tamanhoPalavra(palavra2);
//    numero2 = string2BigInt(palavra2);
    numero2 = criaUm();
//    imprimeNumero(numero2);
//    printf("\n");

    tIntGrande soma = somador(numero1, numero2);
    imprimeNumero(soma);

    return 0;
}

//int main(int argc, char *argv[]) {
//    char palavra1[MAX_TAM];
//    tIntGrande numero1;
//
//    scanf("%s", palavra1);
//    tamanhoPalavra(palavra1);
//    numero1 = string2BigInt(palavra1);
//    imprimeNumero(numero1);
//    printf("\n");
//    return 0;
//}