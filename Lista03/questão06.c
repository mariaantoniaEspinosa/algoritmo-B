#include <stdio.h>
int contarletra(char letra, char texto[]){
	int i, cont=0;
	
	for(i=0; texto[i] !='\0' ;i++){
		if(texto[i]==letra){
			cont++;
		}
	}
	return cont;
}
int main(){
	char texto[100], letra;
	int resultado;
	
	printf("Digite uma frase: ");
	gets(texto);
	
	printf("Digite uma letra: ");
	scanf(" %c", &letra);
	
	resultado = contarletra(letra, texto);
	
	printf("A letra '%c' aparece %d vez(es) na frase!\n", letra, resultado);
	
	return 0;
}
