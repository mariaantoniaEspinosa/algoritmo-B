#include <stdio.h>
//protótipos de funções:
float volume(float a){
	return a*a*a;
}
float perimetro(float a){
	return a+a+a+a;
}
float area(float a){
	a*a;
}
void main(void){
	float aresta;
	printf("Digite a aresta do cubo: ");
	scanf("%f", &aresta);
	printf("Volume do cubo: %.2f\n", volume(aresta));
	printf("Perimetro da base do cubo: %.2f\n", perimetro(aresta));
	printf("Area da base do cubo: %.2f\n", perimetro(aresta));
	
	return 0;
}
