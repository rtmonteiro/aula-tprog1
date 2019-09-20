#include <stdio.h>

int main() {

  FILE *file;
  file = fopen("arquivoBinario.o", "w");

  // char str[100] = "PrimeiraLinha\nSegundaLinha\nTerceiraLinha";
  // fwrite(str, sizeof(char), 50, file);
  
  float x = 37.5;
  fwrite(&x, sizeof(float), 1, file);

  fclose(file);

  return 0;
}