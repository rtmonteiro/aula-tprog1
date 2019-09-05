#include <stdio.h>

void f(int i){
    printf("%d\n", i);
}

void g(int i){
    printf("%d\n", 2*i);
}

void h(int i){
    printf("%d\n", 3*i);
}

void l(int x){
    return x+10;
}

int main(){
    float (*p) (int);
    p = f;
    (*p) (5); // f(5)

    p = g;
    (*p) (10) // g(10)

    p = h;
    (*p) (4) // h(4)

    l(15);
    return 0;
}