//questão 06 Revisão de Conteúdos
#include <stdio.h>

int main(){
	char palavra[20];
	int i, tam=0, contarvogais=0;
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	while(palavra[tam] != '\0'){
		tam++;
	}
	
	if (tam%2==0){
		for(i=tam-1; i>=0; i--){
			printf("%c", palavra[i]);
		}
	}
	else{
		for(i=0; i<tam; i++){
			if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
				contarvogais++;
			} 
		}
	printf("Numero de vogais = %d\n", contarvogais);
	}
	
	return 0;
}
