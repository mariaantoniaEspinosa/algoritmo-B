//Recursividade - Cálculo da Potência
#include <stdio.h>
int potencia(int x, int y){
	if (y==0){
		return 1;
	} 
	else if (y>0){
		return x * potencia(x, y-1);
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
//função interativa = for
//função recursiva = função
