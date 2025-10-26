//questão 11 Revisão dos Conteúdos
#include <stdio.h>
int contar (char *s, char c){
	int cont=0;
	while(*s != '\0'){
		if(*s == c){
			cont++;
		}
		s++;
	}
	return cont;
}

int main(){
	char str[50], caractere;
	
	printf("Digite uma string: ");
	scanf("%s", str);
	
	printf("Digite um caractere: ");
	scanf(" %c", &caractere);
	
	printf("O caractere ocorre %d vezes", contar(str, caractere));
	
	return 0;
}
