#include <stdio.h>
struct tipoAluno {
	char matricula[11];
	char nome [30];
	int anoIngresso;
	float mediaVestibular;
};
// para 01 variável basta declarar "a" antes da main
int main (){
	int i;
	//tipo do dado = conjunto heterogêneo
	// fflush(stdin) = limpa o buffer
	struct tipoAluno a;
	printf("Digite a matricula (max. 10 caracteres):");
	scanf(" %s", a.matricula);
	
	printf ("\nDigite o nome do aluno:");
	scanf(" %[^\n]", a.nome);
	
	printf("\nDigite o ano de Ingresso:");
	scanf(" %d", &a.anoIngresso);
	
	printf("\nDigite a media do vestibular:");
	scanf(" %f", &a.mediaVestibular);
	
	printf("\nDados do aluno:\n");
	printf("Matricula: %s\n", a.matricula);
	printf("Nome: %s\n", a.nome);
	printf("Ano de Ingresso: %d\n", a.anoIngresso);
	printf("Media do Vestibular: %.2f\n", a.mediaVestibular);
	
	//escrever na vertical o nome do aluno: 
	printf ("\n");
	
	for(i=0; a.nome[i] != '\0'; i++){
		printf("%c\n", a.nome[i]);
	}
	return 0;
}
