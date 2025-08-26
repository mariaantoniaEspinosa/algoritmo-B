#include <stdio.h>
struct aluno{
	int matricula;
	int presenca;
};
struct turma{
	int cod;
	int cargah;
	int totalalunos;
	char disciplina[50];
	char professor[60];
	struct aluno alunos[40]
};
int main(){
	struct turma t;
	int i;
	float mediafreq = 0, freq;
	
	printf ("##DIGITE##\n");
	
	printf("Codigo da turma: ");
	scanf( "%d", &t.cod);
	
	printf("Nome da disciplina: ");
	scanf(" %[^\n]s", t.disciplina);
	
	printf("Carga horaria da disciplina (h): ");
	scanf( "%d", &t.cargah);
	
	printf ("Nome do professor: ");
	scanf (" %[^\n]s", t.professor);
	
	printf ("Total de alunos: ");
	scanf (" %d", &t.totalalunos);
	
	for (i=0; i<t.totalalunos;i++){
		//aqui o t.aluno se refede ao struct aluno alunos
		printf("Matricula do aluno %d: ", i +1);
		scanf(" %d", &t.alunos[i].matricula);
		printf("Total de presenca do aluno %d em horas: ", i +1);
		scanf(" %d", &t.alunos[i].presenca);
	}
	
	printf ("##DADOS##\n");
	
	printf("Codigo: %d\n", t.cod);
	printf("Disciplina: %s\n", t.disciplina);
	printf("Carga Horaria: %d horas\n", t.cargah);
	printf("Professor: %s\n", t.professor);
	printf("Total de alunos: %d\n", t.totalalunos);
	
	printf ("##FREQUENCIA##\n");
	for (i=0; i<t.totalalunos; i++){
		freq = (t.alunos[i].presenca*100)/t.cargah;
		printf("Matricula: %d\n", t.alunos[i].matricula);
		printf("Frequencia: %.2%%\n", freq);
		mediafreq += freq;
	}
	mediafreq = mediafreq/t.totalalunos;
	printf("Frequencia media da turma: %.2f%%\n", mediafreq);
	
	return 0;
}
