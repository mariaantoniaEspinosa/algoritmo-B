//questão 11 lista 5
#include <stdio.h>
int main(){
	char s[100];
	char *p;
	int cont = 0;
	
	printf("Digite a string: ");
	gets(s);
	
	for(p = s; *p != '\0' && *p != '\n'; p++){
		cont ++;
	}
	
	printf("Quantidade de caracteres: %d\n", cont);
	
	return 0;
}
