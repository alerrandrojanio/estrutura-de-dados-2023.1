typedef struct aluno Aluno;

Aluno* criaAluno();
char* getNome(Aluno* aluno);
void setNome(Aluno* aluno, char *nome);
int getMatricula(Aluno* aluno);
void setMatricula(Aluno* aluno, int matricula);
float getNota1(Aluno* aluno);
void setNota1(Aluno* aluno, float nota1);
float getNota2(Aluno* aluno);
void setNota2(Aluno* aluno, float nota2);
float getNotaFinal(Aluno* aluno);
void setIdade(Aluno* aluno, int idade);
void setNotaFinal(Aluno* aluno, float notaFinal);
int getQuantidadeFaltas(Aluno* aluno);
void setQuantidadeFaltas(Aluno* aluno, int quantidadeFaltas);
float calcularMedia(Aluno* aluno);
void calcularMediaFinal(Aluno* aluno);
void alunoMaisVelho(Aluno* aluno1, Aluno* aluno2);
