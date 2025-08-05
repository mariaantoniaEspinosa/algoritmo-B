#include <stdio.h>
struct tipoAluno {
	char matricula[11];
	char nome [30];
	int anoIngresso;
	float mediaVestibular;
};
int main (){
	struct tipoAluno alunos[5];
	int i;
	
	for(i=0; i<5; i++){
		printf ("Digite os dados do aluno %d:\n", i+1);
		
		printf ("Matricula: ");
		scanf ("%s", alunos[i].matricula);
		
		printf ("Nome do aluno: ");
		scanf (" %[^\n]", alunos[i].nome);
		
		printf ("Ano de ingresso: ");
		scanf ("%d", &alunos[i].anoIngresso);
		
		printf ("Media do vestibular: ");
		scanf ("%f", &alunos[i].mediaVestibular);
		
		printf ("\n");
	}
	
	printf ("\nDADOS DOS ALUNOS\n");
	for(i=0;i<5; i++){
		printf ("Aluno %d: \n", i+1);
		printf ("Matricula: %s\n", alunos[i].matricula);
		printf ("Nome: %s\n", alunos[i].nome);
		printf ("Ano de Ingresso: %d\n", alunos[i].anoIngresso);
		printf ("Media do Vestibular: %.2f\n\n", alunos[i].mediaVestibular);
	}
	
	return 0;
}
