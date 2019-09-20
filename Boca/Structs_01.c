#include <stdio.h>
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
   int mdc=1;
   int count;
   if (a > b) {
      count = b;
   } else {
      count = a;
   }
   
   for (int i = 1; i <= count; i++){
      printf("%d\n", i);
      if(a%i==0 && b%i==0){
         mdc=i*mdc;
      }
      printf("mdc: %d\n", mdc);
   }

   r.p = a/mdc;
   r.q = b/mdc;
   return r;
}

int main(int argc, char const *argv[])
{
   int a, b;
   scanf("%d", &a);
   scanf("%d", &b);
   
   racional r = reduz(a, b);
   printf("%d/%d\n", r.p, r.q);
   return 0;
}

