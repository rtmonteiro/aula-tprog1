#ifndef _TURMA
  #define _TURMA
  #define MAX_ALUNOS 40

  typedef struct Turma {
    tAluno alunos[MAX_ALUNOS];
    int nAlunos;
  } turma;

  turma lerTurma();
  turma apresentarTurma();
  int obterNumeroAlunos();
  void ordenarMatricula();
  void ordenarIngresso();
  void ordenarCR();
  void ordenarNome();
  void apresentarExcelentes();
  void apresentarAniversariante();
#endif