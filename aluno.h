#ifndef _ALUNO
  #define _ALUNO
  #define MAX_NOME 100

  typedef struct Aluno {
    char nome[MAX_NOME];
    int matricula;
    int idade;
    float cr;
    tData nascimento;
    tData ingresso;
  } tAluno;

  tAluno lerAluno();
  tAluno apresentarAluno(tAluno);
  void compararNome(tAluno);
  void compararIngresso(tAluno);
  void compararMatricula(tAluno);
  void compararCR(tAluno);
  void ehAniversario(tAluno);
  void ehExcelente(tAluno);
#endif