//Lista 7 - questão 2
#include <stdio.h>
#include <stdlib.h>

void lerstring(char *str, int t){
	int i = 0;
	
	printf("Digite a string, letra por letra:\n");
	
	while(i<t){
		fflush(stdin);
		scanf("%c", &str[i]); //scanf("%c", (str+i));
		i++;
	}
	
	str[t] = '\0'; // * (str + t) = '\0';
	
	return ;
}

int main(){
	int tam;
	char *s;
	printf("Tamanho da string: ");
	scanf("%d", &tam);
	
	//alocação dinâmica de memória
	
	s = (char*) malloc ( (tam+1) *sizeof(char) );
	
	if(!s){
		printf("Erro na alocacao dinamica");
		exit(-1);
	}
	
	lerstring(s, tam);
	
	printf("%s", s);
	
	free(s);
	
	return 0;
}
