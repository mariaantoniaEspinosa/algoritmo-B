//questão 3 lista 6
#include <stdio.h>
#include <stdlib.h>

void inverter(char *str){
	char *inicio = str;
	char *fim = str;
	char temp;
	
	while(*fim != '\0'){
		fim++;
	}
	fim--;
	
	while(inicio < fim){
		temp = *inicio;
		*inicio = *fim;
		*fim = temp;
		inicio ++;
		fim --;
	}
}

int main(){
	char s[100];
	printf("Digite uma palavra: ");
	gets(s);
	
	inverter(s);
	
	printf("Palavra inversa: %s\n", s);
	
	return 0 ;
}
