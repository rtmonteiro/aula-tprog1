#include <stdlib.h>
#include <string.h>

#include "data.h"

tData lerData() {
    tData data;
    scanf("%d %d %d", &data.dia, &data.mes, &data.ano);
    return data;
}

int igualdadeData(tData data1, tData data2) {
    int bool = 0;

    if (strcmp(data1.dia,data2.dia) && strcmp(data1.mes,data2.mes) && strcmp(data1.ano,data2.ano)){
        int bool = 1
    }
    return bool;
}
void menorData() {}
tData apresentaData() {}