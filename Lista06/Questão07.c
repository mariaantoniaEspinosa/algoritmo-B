//questão 7 lista 6
#include <stdio.h>
int contar( int *vetor, int tam, int valor){
	int cont = 0, i;
	for(i = 0; i < tam; i++){
		if(*(vetor + i) == valor){
			cont ++;
		}
	}
	return cont;
}

int main(){
	int v[10], numero, i;
	
	for(i = 0; i < 10; i++){
		printf("Digite o valor de %d: ", i + 1);
		scanf("%d", &v[i]);
	}
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	printf("O valor %d aparece %d vezes", numero, contar(v, 10, numero));
	
	return 0;
}
