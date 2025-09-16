//questão 03 - Lista 4
int fibonacci(int n){
	if(n==0){
		return 0;
	} 
	else if(n==1){
		return 1;
	}
	else if(n>1){
		return fibonacci(n-1) + fibonacci(n-2);
	}
}
int main(){
	int numero, resultado;
	
	printf ("Digite um numero que ira somar com seus anteiores: ");
	scanf("%d", &numero);
	
	resultado = fibonacci(numero);
	
	printf("Resultado = %d", resultado);
	
	return 0;
}
