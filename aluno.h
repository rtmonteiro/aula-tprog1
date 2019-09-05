#ifndef _ALUNO
#define _ALUNO

#define MAX_NOME 100
#include "data.h"

//Tipo aluno (tipo opaco)
//Estrutura interna do tipo deve ser definida na implementação do TAD
typedef struct aluno tAluno;

/*Lê a estrutura de aluno da lista de alunos numa turma
* inputs: não tem
* output: o número de colunas da matriz
* pre-condicao: matriz mat existe
* pos-condicao: mat não é modificada
*/
tAluno lerAluno();
tAluno apresentarAluno(tAluno aluno);
void compararNome(tAluno);
void compararIngresso(tAluno);
void compararMatricula(tAluno);
void compararCR(tAluno);
void ehAniversario(tAluno);
void ehExcelente(tAluno);
#endif