#include <stdio.h>
float notas(float nota1, float nota2, float nota3){
	float media;
	media = (nota1+nota2+nota3)/3;
	return media;
}
int main(){
	float nota1, nota2, nota3, medianotas;
	
	printf("Digite a nota 01: ");
	scanf (" %f", &nota1);
	
	printf("Digite a nota 02: ");
	scanf (" %f", &nota2);
	
	printf("Digite a nota 03: ");
	scanf(" %f", &nota3);
	
	medianotas = notas(nota1, nota2, nota3);
	
	printf("A media de notas ficou = %.2f", medianotas);
	
	return 0;
}
