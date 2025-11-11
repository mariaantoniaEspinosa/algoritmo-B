//questão 5
#include <stdio.h>
#include <stdlib.h>
void lervetor(int *a, int tam){
	int i;
	
	printf("Digite os valores do seu vetor: \n");
	
	for(i=0; i<tam; i++){
		printf("Posica[%d]: ", i);
		scanf("%d", (a+i));
	}
	
	return ;
}

void mostrarvetor(int *a, int tam){
	int i;
	
	for(i=0; i<tam; i++){
		printf("\t%d", *(a+i));
	}
	
	return ;
}

int contar(int *a, int tam){
	int p=0, n=0, i;
	
	for(i=0; i<tam; i++){
		n = *(a+i); 
		if(primo(n)){
			p++;
		}
	}
	return p;
}

int primo (int n){
	int i;
	
	if(n<2){
		return 0;
	}
	for(i=2 ; i<= n/2; i++){
		if( n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int *a, tamanho, cont;
	
	printf("Digite o tamanho do seu vetor:");
	scanf("%d", &tamanho);
	
	a = (int *) malloc (tamanho * sizeof(int) );
	if(!a){
		printf("erro");
		exit(-1);
	}
	
	lervetor(a, tamanho);
	
	printf("Seu vetor: ");
	mostrarvetor(a, tamanho);
	cont = contar(a, tamanho);
	
	printf("\n");
	
	printf("Existe %d numero(s) primo(s) neste vetor\n", cont);
	
	free(a);
	
	return 0;
	
}
