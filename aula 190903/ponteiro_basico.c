#include <stdlib.h>
#include <stdio.h>

void trocar(int* p, int* q){
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
}

void ordenaVetor(int v[], int tam) {
    for (int i = 0; i < tam - 1; i++){
        for (int j = i + 1; j < tam; j++){
            if (v[i]>v[j]){
                trocar(&v[i], &v[j]);
            }
        }
    }
}

void apresentarVetor(int v[], int tam) {
    for (int i = 0; i < tam; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}
// int main(){
//     int i = 2,  j = 5,
//         m = 17, n = 32;
    
//     printf("%d %d\n", i, j);
//     trocar(&i, &j);
    
//     printf("%d %d\n", m, n);
//     trocar(&m, &n);
    
//     printf("%d %d\n", i, j);
//     printf("%d %d\n", m, n);

//     return 0;
// }

int main() {
    int vetor[] = {2,5,8,1};
    int tamanho = 4;

    apresentarVetor(vetor, tamanho);

    ordenaVetor(vetor, tamanho);
    apresentarVetor(vetor, tamanho);
    return 0;
}