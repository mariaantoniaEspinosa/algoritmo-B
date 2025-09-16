//questão 02 - parte 1- lista 4
#include <stdio.h>
int potencia(int n, int y){
	if (y==0){
		return 1;
	} 
	else if (y>0){
		return n * potencia(n, y-1);
	}
}
int main(){
	int base, expoente, resultado;
	
	printf("Digite o valor da base: ");
	scanf("%d", &base);
	
	printf("Digite o valor do expoente: ");
	scanf("%d", &expoente);
	
	resultado = potencia(base, expoente);
	
	printf("%d^%d = %d\n", base, expoente, resultado);
	
	return 0;
}
