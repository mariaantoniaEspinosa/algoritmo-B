//questão 5 lista 6
#include <stdio.h>
int comparar( char *a , char *b){
	while(*a && *b){
		if(*a != *b){
			return 0;
		}
		a++;
		b++;
	}
	if(*a == *b){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	char p1[100], p2[100];
	
	printf("Digite a palavra 1: ");
	gets(p1);
	
	printf("Digite a palavra 2: ");
	gets(p2);
	
	if(comparar(p1, p2)){
		printf("As palavras sao iguais");
	}
	else{
		printf("Palavras diferentes");
	}
	
	return 0;
	
}
