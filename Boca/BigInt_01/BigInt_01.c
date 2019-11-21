#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_TAM 100

typedef struct intGrande
{
  int vec[MAX_TAM];
  int tam;
} tIntGrande;

tIntGrande lerNumero() {
  tIntGrande num;
  int i = 0;

  while (num.vec[i] != '\n')
  {
    scanf("%d", &num.vec[i]);
    num.tam = i;
    i++;
  }

  return num;
}

int main(int argc, char const *argv[])
{
  tIntGrande num1 = lerNumero();
  tIntGrande num2 = lerNumero();


  return 0;
}
