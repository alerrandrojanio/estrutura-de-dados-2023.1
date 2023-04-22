typedef struct triangulo Triangulo;

Triangulo* criarTriangulo();
void setLadosTriangulo(Triangulo* triangulo, float lado1, float lado2, float lado3);
float acharBase(Triangulo* triangulo);
float acharAlturaEquilatero(Triangulo* triangulo);
float calcularAreaTriangulo(Triangulo* triangulo);
float calcularPerimetroTriangulo(Triangulo* triangulo);
int tipoTriangulo(Triangulo* triangulo);
