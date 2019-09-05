#include <stdlib.h>
#include <stdio.h>
#include "aluno.h"

typedef struct Aluno {
  char nome[MAX_NOME];
  int matricula;
  int idade;
  float cr;
  tData nascimento;
  tData ingresso;
} tAluno;

tAluno lerAluno() {}
tAluno apresentarAluno() {}
void compararNome() {}
void compararIngresso() {}
void compararMatricula() {}
void compararCR() {}
void ehAniversario() {}
void ehExcelente() {}