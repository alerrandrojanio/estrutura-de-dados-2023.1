#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"

#define PI 3.1416

struct circulo {
  float raio;
};

Circulo* criarCirculo() {
  return (Circulo*) malloc(sizeof(Circulo));
}


void setRaioCirculo(Circulo* circulo, float raio){
  circulo->raio = raio;
}

float calcularAreaCirculo(Circulo* circulo) {
  return PI * pow(circulo->raio, 2.0);
}

float calcularCircunferencia(Circulo* circulo) {
  return 2 * PI * circulo->raio;
}
