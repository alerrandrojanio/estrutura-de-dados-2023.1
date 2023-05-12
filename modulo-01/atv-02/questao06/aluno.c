#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

struct aluno {
  char *nome;
  int matricula;
  int idade;
  float nota1;
  float nota2;
  float notaFinal;
  int quantidadeFaltas;
};

Aluno* criaAluno() {
  return (Aluno*) malloc(sizeof(Aluno));
}

char* getNome(Aluno* aluno){
  return aluno->nome;
}

void setNome(Aluno* aluno, char *nome){
  aluno->nome = nome;
}

int getMatricula(Aluno* aluno){
  return aluno->matricula;
}

void setMatricula(Aluno* aluno, int matricula){
  aluno->matricula = matricula;
}

float getNota1(Aluno* aluno){
  return aluno->nota1;
}

void setNota1(Aluno* aluno, float nota1){
  aluno->nota1 = nota1;
}

float getNota2(Aluno* aluno){
  return aluno->nota2;
}

void setNota2(Aluno* aluno, float nota2){
  aluno->nota2 = nota2;
}

float getNotaFinal(Aluno* aluno){
  return aluno->notaFinal;
}

void setNotaFinal(Aluno* aluno, float notaFinal){
  aluno->notaFinal = notaFinal;
}

void setIdade(Aluno* aluno, int idade){
  aluno->idade = idade;
}

int getQuantidadeFaltas(Aluno* aluno){
  return aluno->quantidadeFaltas;
}

void setQuantidadeFaltas(Aluno* aluno, int quantidadeFaltas){
  aluno->quantidadeFaltas = quantidadeFaltas;
}

float calcularMedia(Aluno* aluno){
  return (aluno->nota1 + aluno->nota2)/2;
}

void calcularMediaFinal(Aluno* aluno) {
  float media = (aluno->nota1 + aluno->nota2 + aluno->notaFinal) / 3;

  if(media >= 7) {
    printf("aluno aprovado com media %.2f!\n", media);
  }
  else if(media >= 4 && media < 7) {
    printf("aluno devera fazer avaliacao final! media %.2f\n", media);
  }
  else {
    printf("aluno reprovado com media %.2f!\n", media);
  }
}

void alunoMaisVelho(Aluno* aluno1, Aluno* aluno2) {
  char *nomeAluno1 = getNome(aluno1);
  char *nomeAluno2 = getNome(aluno2);

  if(aluno1->idade == aluno2->idade) {
    printf("os alunos tem a mesma idade!\n");
  }
  else if(aluno1->idade > aluno2->idade) {
    printf("o aluno %s é mais velho que %s!\n", nomeAluno1, nomeAluno2);
  }
  else {
    printf("o aluno %s é mais velho que %s!\n", nomeAluno2, nomeAluno1);
  }
}
