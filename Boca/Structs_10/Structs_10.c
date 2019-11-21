//
// Created by ryan on 20/11/2019.
//
#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
};

typedef struct aluno Aluno;
// Aluno inicializa_aluno (char nome[], char matricula[], char turma, float p1, float p2, float p3);
float calculo_MF(Aluno aluno);
void imprime_aprovados (int n, Aluno* turma);

/*
Aluno inicializa_aluno(char nome[], char matricula[], char turma, float p1, float p2, float p3) {
    Aluno aluno;
    strcpy(aluno.nome, nome);
    strcpy(aluno.matricula, matricula);
    aluno.turma = turma;
    aluno.p1 = p1;
    aluno.p2 = p2;
    aluno.p3 = p3;

    return aluno;
}*/

float calculo_MF(Aluno aluno) {
    float media_final;
    media_final = ((aluno.p1 + aluno.p2 + aluno.p3) / 3);
    return media_final;
}

void imprime_aprovados (int n, Aluno* turma){
    Aluno* alunos_aprovados[n];
    int j = 0;
    for (int i = 0; i < n; ++i) {
        float mf = calculo_MF(turma[i]);
        if (mf>=7.0){
            alunos_aprovados[j] = &turma[i];
            j++;
            printf("Mat: %s, Nome: %s, Turma: %c, MF: %.2f\n",
                    alunos_aprovados[i]->matricula,
                    alunos_aprovados[i]->nome,
                    alunos_aprovados[i]->turma,
                    mf);
        }
    }
}


/*
int main () {
    int n = 2;
    Aluno turma[n];
    turma[0] = inicializa_aluno("Massah" , "1999012", '5', 7.13, 7.13, 7.13);
    turma[1] = inicializa_aluno("Mister M" , "1999013", '5', 8.63, 8.63, 8.63);

    imprime_aprovados(n, turma);

}*/
