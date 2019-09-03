#include <stdio.h>

int contar(int v[], int n, int (*p)(int)){
    int h = 0;
    for (int i = 0; i < n; i++){
        if((*p) (v[i])){
            h++;
        }
    }
    return h;
}

int par(int i){
    return i%2 == 0;
}

int impar(int i){
    return !par(i);
}

int multiplo7(int i){
    return i%7 == 0;
}

int main(){
    int v[] = {7, 3, 1, 2, 4, 9, 8};
    int n = 5;

    int pares = contar(v, n, par);
    int impares = contar(v, n, impar);
    int multiplos7 = contar(v, n, multiplo7);

    printf("%d %d %d", pares, impares, multiplos7);
    return 0;
}