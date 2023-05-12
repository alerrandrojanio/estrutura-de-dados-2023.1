#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "triangulo.h"

struct triangulo {
  float lado1, lado2, lado3;
  float base;
  float altura;

};

Triangulo* criarTriangulo() {
  return (Triangulo*) malloc(sizeof(Triangulo));
}

void setLadosTriangulo(Triangulo* triangulo, float lado1, float lado2, float lado3) {
  triangulo->lado1 = lado1;
  triangulo->lado2 = lado2;
  triangulo->lado3 = lado3;
}

float acharBase(Triangulo* triangulo) {
  float base;

  if(triangulo->lado1 > triangulo->lado2){
    if(triangulo->lado1 > triangulo->lado3) {
      base = triangulo->lado1;
    }
    else {
      base = triangulo->lado3;
    }
  }
  else {
    if(triangulo->lado2 > triangulo->lado3) {
       base = triangulo->lado2;
    }
    else {
      base = triangulo->lado3;
    }
  }

  return base;
}


float acharAlturaEquilatero(Triangulo* triangulo) {
  return (sqrt(3) * triangulo->lado1) / 2;
}

float calcularAreaTriangulo(Triangulo* triangulo) {
  if (tipoTriangulo(triangulo) == 0) {
    return (acharBase(triangulo) * acharAlturaEquilatero(triangulo)) / 2;
  }
  return 0;
}

float calcularPerimetroTriangulo(Triangulo* triangulo) {
  return triangulo->lado1 + triangulo->lado2 + triangulo->lado3;
}

int tipoTriangulo(Triangulo* triangulo) {
  if(triangulo->lado1 == triangulo->lado2
  && triangulo->lado1 == triangulo->lado3) {
    printf("- Triângulo equilátero\n");
    return 0;
  }
  else if(triangulo->lado1 != triangulo->lado2
  && triangulo->lado1 != triangulo->lado3
  && triangulo->lado2 != triangulo->lado3) {
    printf("- Triângulo Escaleno\n");
    return 1;
  }
  else {
    printf("- Triângulo Isosceles\n");
    return 2;
  }
}
