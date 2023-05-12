#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int main( ){
  Aluno* aluno1 = criaAluno();
  setNome(aluno1, "Joao");
  setNota1(aluno1, 5);
  setNota2(aluno1, 8);
  setNotaFinal(aluno1, 10);
  setIdade(aluno1, 10);

  Aluno* aluno2 = criaAluno();
  setNome(aluno2, "Francisco");
  setNota1(aluno2, 7);
  setNota2(aluno2, 9);
  setNotaFinal(aluno2, 3);
  setIdade(aluno2, 9);

  float media = calcularMedia(aluno1);

  char* nome = getNome(aluno1);

  printf("A media de %s foi: %.2f\n", nome, media);

  void alunoMaisVelho(aluno1, aluno2);

  return 0;
}
