#include <stdlib.h>
#include <string.h>

#define MAX_NOME 100
#define MAX_ALUNOS 40

typedef struct tData{
    int dia, mes, ano;
} tData;

tData lerData() {}
void igualdadeData() {}
void menorData() {}
tData apresentaData() {}

typedef struct tAluno {
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

typedef struct turma {
    tAluno alunos[MAX_ALUNOS];
    int nAlunos;
} turma;

turma lerTurma() {}
turma apresentarTurma() {}
int obterNumeroAlunos() {}
void ordenarMatricula() {}
void ordenarIngresso() {}
void ordenarCR() {}
void ordenarNome() {}
turma apresentarExcelentes() {}
turma apresentarAniversariante() {}
