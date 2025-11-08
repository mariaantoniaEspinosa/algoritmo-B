//questão 12 lista 5
#include <stdio.h>
int main(){
	char s[100];
	char *i, *f, aux;
	
	printf("Digite a string: ");
	gets(s);
	
	i = s;
	while(*i != '\0' && *i != '\n'){
		i++;
	}
	i--;
	f = s;
	
	while( f< i){
		aux = *f;
		*f = *i;
		*i = aux;
		f++;
		i--;
	}
	
	printf("String invertida: %s", s);
	
	return 0;
}
