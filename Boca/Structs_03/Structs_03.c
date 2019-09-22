#include <stdio.h>
#include <stdlib.h>

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

racional mmc(racional x, racional y) {
   racional denominadores;
   int i = y.q;
   if (x.q>y.q) {
      i = x.q;
   }
   int mmc = 1;
   printf("%d, %d | %d\n", x.q, y.q, i);
   do {
      if (x.q%i==0) {
         x.q/=i;
         if (y.q%i==0) {
            y.q/=i;
         } 
         mmc*=i;
      }
      i--;
      printf("%d, %d | %d\n", x.q, y.q, i);
   } while(x.q != 1 && y.q != 1);
   printf("mmc: %d", mmc);
   return denominadores;
}


/* Recebe os racionais x e y e devolve o racional que representa a soma de x e y */
racional soma (racional x, racional y) {
	
	/* INSIRA SEU CODIGO AQUI */
	
	
	
}

int main(int argc, char const *argv[])
{
   int a, b, c, d;
   // printf("Sendo p/q\n");
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
   scanf("%d", &d);
   
   racional x = reduz(a, b);
   racional y = reduz(c, d);
   printf("%d/%d\n", x.p, x.q);
   printf("%d/%d\n", y.p, y.q);

   racional denominadores;
   denominadores = mmc(x, y);

   return 0;
}
// input:
// 4 1 1 8 -> 129/8
// 8 2 -2 -16 -> 129/8
// -8 -2 -2 -16 -> 129/8
