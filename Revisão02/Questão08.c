//questão 08 Revisão de Conteúdos
#include <stdio.h>

int potenciainterativa(int x, int n){
	int i, resultado = 1;
	for(i=0; i<n; i++){
		resultado *= x;
	}
	return resultado;
}

int potenciarecursiva(int x, int n){
	if(n == 0){
		return 1;
	}
	else {
		return x * potenciarecursiva(x, n-1);
	}
}

int main(){
	int x, n;
	
	printf("Digite um valor para X e outro para N:\n");
	printf("X = ");
	scanf("%d", &x);
	printf("N = ");
	scanf("%d", &n);
	printf("Interativa = %d\n", potenciainterativa(x, n));
	printf("Recursiva = %d\n", potenciarecursiva(x, n));
	
	return 0;
}
