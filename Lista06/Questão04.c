//questao 4 lista 6
#include <stdio.h>
int palindromo(char *str){
	char *inicio = str;
	char *fim = str;
	
	while(*fim != '\0'){
		fim ++;
	}
	fim--;
	
	while(inicio < fim){
		if(*inicio != *fim){
			return 0;
		}
		inicio ++;
		fim --;
	}
	
	return 1;
}

int main(){
	char s[100];
	
	printf("Digite uma palavra: ");
	gets(s);
	
	if(palindromo){
		printf("eh palindromo");
	}
	else{
		printf("nao eh palindromo");
	}
	
	return 0;
}
