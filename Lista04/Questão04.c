//questão 4 lista 4
#include <stdio.h>

int soma_entre (int n1, int n2){
	if (n1 == n2){
		return n1;
	}
	else if (n1 < n2){
		return n1 + soma_entre(n1 + 1, n2); // soma e avança n1
	}
	else {
		return n1 + soma_entre(n1 -1, n2); // soma e reduz n1
	}
}

int main(){
	int n1, n2, resultado;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	resultado = soma_entre(n1, n2);
	
	printf("A soma dos inteiros entre %d e %d (inclusive) eh = %d\n", n1, n2, resultado);
	
	return 0;
}
