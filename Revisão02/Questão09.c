//questão 09 Revisão de Conteúdos
#include <stdio.h>

int tamanho(char *p){
	int i=0;
	while(p[i] != '\0'){
		i++;
	}
	return i;
}

int palindromo(char *p){
	int i=0, j=tamanho(p) - 1;
	while(i < j){
		if (p[i] != p[j]){
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}

int main(){
	char palavra[50];
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	if(palindromo(palavra)){
		printf("Eh palindromo");
	}
	else{
		printf("Nao eh palindromo");
	}
	return 0;
}
