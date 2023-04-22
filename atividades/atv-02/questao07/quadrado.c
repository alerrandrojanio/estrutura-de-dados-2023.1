#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "quadrado.h"

struct quadrado {
  float lado;
};

Quadrado *criarQuadrado() {
  return (Quadrado*) malloc(sizeof(Quadrado));
}

void setLadoQuadrado(Quadrado* quadrado, float lado) {
 quadrado->lado = lado;
}

float calcularAreaQuadrado(Quadrado* quadrado) {
  return pow(quadrado->lado, 2);
}

float calcularPerimetroQuadrado(Quadrado* quadrado) {
  return quadrado->lado * 4;
}
