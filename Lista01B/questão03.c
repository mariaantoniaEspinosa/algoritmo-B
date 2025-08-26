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
	struct aluno alunos[40];
};
int main(){
	struct turma t[32];
	int i, j, totalturma;
	float mediafreq = 0, freq;
	
	printf ("##DIGITE##\n");
	
	printf("Total de turmas: ");
	scanf(" %d", &totalturma);
	
	for(i=0; i<totalturma;i++){
		printf ("##TURMA %d\n", i+1);	

		printf("Codigo da turma: ");
		scanf( "%d", &t[i].cod);
	
		printf("Nome da disciplina: ");
		scanf(" %[^\n]", t[i].disciplina);
	
		printf("Carga horaria da disciplina (h): ");
		scanf( "%d", &t[i].cargah);
	
		printf ("Nome do professor: ");
		scanf (" %[^\n]", t[i].professor);
	
		printf ("Total de alunos: ");
		scanf (" %d", &t[i].totalalunos);
	
		for (j=0; j<t[i].totalalunos;j++){
			//aqui o t.aluno se refede ao struct aluno alunos
			printf("Matricula do aluno %d: ", i +1);
			scanf(" %d", &t[i].alunos[j].matricula);
			printf("Total de presenca do aluno %d em horas: ", i +1);
			scanf(" %d", &t[i].alunos[j].presenca);
		}
	}
	
	printf ("##DADOS##\n");
	
	for(i=0; i<totalturma; i++){
		printf ("##TURMA %d\n##", i+1);
		printf("Codigo: %d\n", t[i].cod);
		printf("Disciplina: %s\n", t[i].disciplina);
		printf("Carga Horaria: %d horas\n", t[i].cargah);
		printf("Professor: %s\n", t[i].professor);
		printf("Total de alunos: %d\n", t[i].totalalunos);
	
		printf ("##FREQUENCIA##\n");
		
		for (j=0; j<t[i].totalalunos; j++){
			freq = (t[i].alunos[j].presenca*100)/t[i].cargah;
			printf("Matricula: %d\n", t[i].alunos[j].matricula);
			printf("Frequencia: %.2%%\n", freq);
			mediafreq += freq;
		}
		if (t[i].totalalunos>0){
			mediafreq = mediafreq/t[i].totalalunos;
			printf("Frequencia media da turma: %.2f%%\n", mediafreq);
			printf("##\n")
		}
	}
	return 0;
}
