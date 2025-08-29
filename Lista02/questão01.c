#include <stdio.h>
int conversao(int dia, int mes, int ano){
	int total;
	total = (ano * 365) + (mes * 30) + dia;
	return total;
}
int main(){
	int dias, meses, anos, Total;
	
	printf("Digite sua idade em anos, meses e dias: \n");
	printf("Anos: ");
	scanf(" %d", &anos);
	printf("Meses: ");
	scanf(" %d", &meses);
	printf("Dias: ");
	scanf(" %d", &dias);
	
	total = conversao(anos, meses, dias);
	
	printf("Idade em dias: %d\n", total);
	
	return 0;
}//funções
