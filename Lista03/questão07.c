#include <stdio.h>
int datadias(int dia, int mes, int ano){
	return (ano * 360) + (mes * 30) + dia;
}
int diferencadias(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2){
	int dias1 = datadias(dia1, mes1, ano1);
	int dias2 = datadias (dia2, mes2, ano2);
	
	if(dias1>dias2){
		return dias1-dias2;
	} else{
		return dias2-dias1;
	}
}
int main(){
	int d1, m1, a1;
	int d2, m2, a2;
	
	printf("Digite a primeira data: (dd/mm/aaaa):");
	scanf("%d/%d/%d", &d1, &m1, &a1);
	
	printf("Digite a segunda data: (dd/mm/aaaa):");
	scanf("%d/%d/%d", &d2, &m2, &a2);
	
	printf("A diferenca entre as datas eh de %d dias\n", diferencadias(d1, m1, a1, d2, m2, a2));
	
	return 0;
}
