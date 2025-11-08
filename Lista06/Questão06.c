//questão 6 lista 6
#include <stdio.h>
void cortar(char *str, char letra){
	while(*str != '\0'){
		if(*str == letra){
			*str = '\0';
			break;
		}
		str++;
	}
}

int main(){
	char s[100], letra;
	
	printf("Digite uma palavra: ");
	gets(s);
	
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	
	contar(s, letra);
	
	printf("Nova palavra: %s\n", s);
	
	return 0;
}
