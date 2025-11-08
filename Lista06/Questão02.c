// lista 6 questão 2
#include <stdio.h>
int contar(char *str){
	int cont = 0;
	while(*str != '\0'){
		cont ++;
		str ++;
	}
	return cont;
}

int main(){
	char s[100];
	
	printf("Digite uma palavra: ");
	gets(s);
	
	printf("A palavra possui %d caracteres\n", contar(s));
	
	return 0;
}
