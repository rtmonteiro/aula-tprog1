//
// Created by ryan on 20/11/2019.
//
#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} data;

data leData ();

void imprimeData (data atual);

data leData() {
    data atual = {0, 0, 0};
//    printf("Digite o dia: ");
    while(!(atual.dia>=1 && atual.dia <=31)){
        scanf("%d", &atual.dia);
    }
//    printf("\nDigite o mes: ");
    while(!(atual.mes>=1 && atual.mes <=12)){
        scanf("%d", &atual.mes);
    }
//    printf("\nDigite o ano: ");
    while(atual.ano < 1){
        scanf("%d", &atual.ano);
    }
    return atual;
}

void imprimeData(data atual) {
    printf("A data informada eh %02d/%02d/%d.", atual.dia, atual.mes, atual.ano);
}

int main (){
    data atual = leData();

    imprimeData(atual);
    return 0;
}

#pragma clang diagnostic pop