#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "circulo.h"
#include "quadrado.h"
#include "triangulo.h"

int main(){
  setlocale(LC_ALL, "Portuguese");

  Circulo* circulo = criarCirculo();
  setRaioCirculo(circulo, 4);

  printf("# CIRCULO\n\n");
  float areaCirculo = calcularAreaCirculo(circulo);
  float circuferencia = calcularCircunferencia(circulo);

  printf("- A área do círculo é: %.2f\n", areaCirculo);
  printf("- O tamanho da circunferência é de: %.2f\n", circuferencia);

  Quadrado* quadrado = criarQuadrado();
  setLadoQuadrado(quadrado, 2);

  printf("\n# QUADRADO\n\n");
  float areaQuadrado = calcularAreaQuadrado(quadrado);
  float perimetroQuadrado = calcularPerimetroQuadrado(quadrado);

  printf("- A área do quadrado é: %.2f\n", areaQuadrado);
  printf("- O tamanho do perímetro é de: %.2f\n", perimetroQuadrado);

  Triangulo* triangulo = criarTriangulo();
  setLadosTriangulo(triangulo, 3, 3, 3);

  printf("\n# Triângulo\n\n");
  float areaTriangulo = calcularAreaTriangulo(triangulo);
  float perimetroTriangulo = calcularPerimetroTriangulo(triangulo);

  printf("- A área do triângulo é: %.2f\n", areaTriangulo);
  printf("- O tamanho do perímetro é de: %.2f\n", perimetroTriangulo);
}
