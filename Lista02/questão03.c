#include <stdio.h>
float soma(float x, float y){
	return x+y;
}
float sub(float x, float y){
	return x-y;
}
float mult(float x, float y){
	return x*y;
}
float div(float x, float y){
	if(y==0){
		printf("**divisao por zero!!! \n");
		return 0;
	}else{
		return x/y;
	}
}
int main(){
	float a, b;
	printf("Informe 2 numeros: ");
	scanf("%f%f", &a,&b);
	
	printf("Soma = %.0f\n", soma(a,b));
	printf("Subtrcao: %.0f\n", sub(a,b));
	printf("Multiplicacao: %.0f\n", mult(a,b));
	printf("Divisao: %.0f\n", div(a,b));
	
	return 0;
}
