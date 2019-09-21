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

/* INSIRA SEU CODIGO AQUI, CASO PRECISE CRIAR ALGUMA FUNCAO AUXILIAR */
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
      if(a%i==0 && b%i==0 && i!=1) {
         mdc=i*mdc;
         a=a/i;
         b=b/i;
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


/* Recebe um racional x e devolve o racional −x */
racional neg (racional x) {
   racional r = reduz(x.p, x.q);

   r.p*=-1;
   
	return r;
}

// int main(int argc, char const *argv[])
// {
//    int a, b;
//    scanf("%d", &a);
//    scanf("%d", &b);
   
//    racional r = reduz(a, b);
//    racional x = neg(r);
//    printf("%d/%d\n", x.p, x.q);
//    return 0;
// }
