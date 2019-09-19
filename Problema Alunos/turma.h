#ifndef _TURMA
#define _TURMA
#define MAX_ALUNOS 40

#include "aluno.h"

typedef struct Turma {
  tAluno alunos[MAX_ALUNOS];
  int nAlunos;
} tTurma;

tTurma lerTurma();
tTurma apresentarTurma();
int obterNumeroAlunos();
void ordenarMatricula();
void ordenarIngresso();
void ordenarCR();
void ordenarNome();
void apresentarExcelentes();
void apresentarAniversariante();
#endif