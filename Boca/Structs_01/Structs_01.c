#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
   Racional de qualquer numero da forma p/q, sendo p inteiro e q inteiro nao nulo. Vamos
   convencionar que o campo q de todo racional eh estritamente positivo e que o maximo 
   divisor comum dos campos p e q eh 1.
*/

typedef struct {
   int p, q;
} racional;

/* INSIRA SEU CODIGO AQUI, CASO DESEJE CRIAR ALGUMA FUNCAO AUXILIAR */



/* Recebe inteiros a e b e devolve o racional que representa a/b */
racional reduz (int a, int b) {	
	racional r;

   int mdc = 1;
   int neg = 0;
   
   if ((a<0) != (b<0)) {
      neg = 1;
   }
   r.p = a = abs(a);
   r.q = b = abs(b);

   int count = a;
   if (a > b) {
      count = b;
   }

   for (int i = count; i >= 1; i--) {
      // printf("i: %d\n", i);
      if(a%i==0 && b%i==0 && i!=1) {
         mdc=i*mdc;
         a=a/i;
         b=b/i;
         // printf("mdc: %d\n", mdc);
         // printf("a:%d\n", a);
         // printf("b:%d\n", b);
         break;
      }
   }

   if (neg==1) {
      r.p = -(r.p/mdc);
   } else {
      r.p = r.p/mdc;
   }
   r.q = r.q/mdc;

   return r;
}

// int main(int argc, char const *argv[])
// {
//    int a, b;
//    scanf("%d", &a);
//    scanf("%d", &b);
   
//    racional r = reduz(a, b);
//    printf("%d/%d\n", r.p, r.q);
//    return 0;
// }

