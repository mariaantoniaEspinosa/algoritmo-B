#include <stdio.h>
#define pi 3.14159

void linha(){
	printf("================================================\n");
	return 0;
}

float funcaoArea(float r){
	return pi * r * r;
}

int main(){
	float raio;
	float area;
	float perimetro;
	
	linha();
	printf("Calculo da Area e do Perimetro de um Circulo\n");
	linha();
	printf("Insira o valor do raio do circulo: ");
	scanf("%f", &raio);
	area = funcaoArea(raio);
	printf("Area = %.2f\n", area);
	linha();
	
	return 0;
}
