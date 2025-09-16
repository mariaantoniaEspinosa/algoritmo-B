//questão 01 - lista 4
int somainteiros(int n){
	if (n==0){
		return 0;
	} 
	else if (n>0){
		return n + somainteiros(n-1);
	}
}
int main(){
	int numero, resultado;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	resultado = somainteiros(numero);
	
	printf("A soma dos %d primeiros numeros inteiros = %d\n", numero, resultado);
	
	return 0;
}
