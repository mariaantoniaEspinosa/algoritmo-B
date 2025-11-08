//questão 8 lista 6
#include <stdio.h>
int contar(char *str, char c){
	int cont = 0;
	while (*str != '\0'){
		if(*str == c){
			cont++;
		}
		str++;
	}
	return cont;
}

int main(){
	char s[100], letra;
	
	printf("Digite uma palavra: ");
	gets(s);
	
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	
	printf("A letra ''%c'' aparece %d vezes", letra, contar(s, letra));
	
	return 0;
}
