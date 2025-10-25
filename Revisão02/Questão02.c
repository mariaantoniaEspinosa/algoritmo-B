//questão 02 Revisão de Conteúdos 
#include <stdio.h>
void trocarvogais(char *p){
	while(*p != '\0'){
		if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u'){
			*p = '#';
		}
		p++;
	}
}

int main(){
	char palavra[100];
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	trocarvogais(palavra);
	
	printf("\n");
	
	printf("Resultado: %s\n", palavra);
	
	return 0;
}
