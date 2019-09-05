#ifndef _DATA
#define _DATA

//Tipo aluno (tipo opaco)
//Estrutura interna do tipo deve ser definida na implementação do TAD
typedef struct Data{
  int dia, mes, ano;
} tData;

tData lerData();
tData apresentaData();
void igualdadeData();
void menorData();
#endif