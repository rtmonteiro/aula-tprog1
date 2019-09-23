#include <stdio.h>

/* 
   Racional de qualquer numero da forma p/q, sendo p inteiro e q inteiro nao nulo. Vamos
   convencionar que o campo q de todo racional eh estritamente positivo e que o maximo 
   divisor comum dos campos p e q eh 1.   
*/

typedef struct {
   int p, q;
} racional;

/* INSIRA SEU CODIGO AQUI, CASO DESEJE CRIAR ALGUMA FUNCAO AUXILIAR */
racional reduz(int a, int b)
{
   racional r;

   int mdc = 1;
   int neg = 0;

   if ((a < 0) != (b < 0))
   {
      neg = 1;
   }
   r.p = a = abs(a);
   r.q = b = abs(b);

   int count = a;
   if (a > b)
   {
      count = b;
   }

   for (int i = count; i >= 1; i--)
   {
      if (a % i == 0 && b % i == 0 && i != 1)
      {
         mdc = i * mdc;
         a = a / i;
         b = b / i;
         break;
      }
   }

   if (neg == 1)
   {
      r.p = -(r.p / mdc);
   }
   else
   {
      r.p = r.p / mdc;
   }
   r.q = r.q / mdc;

   return r;
}


/* Recebe os racionais x e y e devolve o racional que representa o quociente de x por y */
racional quoci (racional x, racional y) {

	racional z;
   z.p = x.p * y.q;
   z.q = x.q * y.p;
   z = reduz(z.p, z.q);

   return z;
}
