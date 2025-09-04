#include <stdio.h>
void mostrarinverso(int vetor[], int tamanho){
	int i;
	printf("Vetor inverso:\n ");
	for(i=tamanho-1;i>=0;i--){
		printf("%d", vetor[i]);
	}
	printf("\n");
}
int vetorespares(int vetor[], int tamanho, int par[]){
	int tpar=0, i;
	for(i=0;i<tamanho;i++){
		if(i%2==0){
			par[tpar]=vetor[i];
			tpar++;
		}
	}
	return tpar;
}
int vetoresimpares(int vetor[], int tamanho, int impar[]){
	int timpar=0, i;
	for(i=0;i<tamanho;i++){
		if(i%2!=0){
			impar[timpar]=vetor[i];
			timpar++;
		}
	}
	return timpar;
}
int main(){
	int tamanho=30, vetor[30], par[30], impar[30], tpar, timpar;
	int i;
	
	printf("Digite %d numero(s) inteiros: ", tamanho);
	for(i=0;i<tamanho;i++){
		scanf("%d", &vetor[i]);
	}
	
	mostrarinverso(vetor, tamanho);
	tpar=vetorespares(vetor, tamanho, par);
	timpar=vetoresimpares(vetor, tamanho, impar);
	
	printf("Elementos com indice par:\n ");
	for(i=0;i<tpar;i++){
		printf("%d\n", par[i]);
	}
	
	printf("Elementos com indice impar:\n");
	for(i=0;i<timpar;i++){
		printf("%d\n", impar[i]);
	}
	
	printf("\n");
	
	return 0;
	
}
