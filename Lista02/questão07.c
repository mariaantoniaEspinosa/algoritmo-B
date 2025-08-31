#include <stdio.h>
float calculofrequencia(float horas, float faltas){
	float presenca, frequencia;
	
	presenca = horas - faltas;
	frequencia = (presenca/horas)*100;
	
	return frequencia;
}
int main(){
	float horas, faltas, frequencia;
	
	printf("Digite o total de horas da Disciplina: ");
	scanf (" %f", &horas);
	
	printf("Digite o total de horas faltadas: ");
	scanf (" %f", &faltas);
	
	frequencia = calculofrequencia(horas, faltas);
	
	printf("Seu percentual de frequencia eh %.2f%%\n", frequencia);
	
	return 0;
}
