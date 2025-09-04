#include <stdio.h>
int bissexto(int ano){
	if(ano % 400 == 0){
		return 1;
	}
	else if(ano % 100 == 0){
		return 0;
	}
	else if (ano % 4 == 0){
		return 1;
	}
	else {
		return 0;
	}
}
int main(){
	int ano;
	
	printf("Digite um ano: ");
	scanf("%d", &ano);
	
	if(bissexto(ano)){
		printf("O ano %d eh bissexto\n", ano);
	} 
	else {
		printf("O ano %d nao eh bissexto\n", ano);
	}
	return 0;
}
