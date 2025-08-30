#include <stdio.h>
float calculoarea (float largura, float comprimento){
	return largura * comprimento;
}
float calculoperimetro(float largura, float comprimento){
	return 2 * (largura + comprimento);
}
int main(){
	float largura, comprimento, area, perimetro;
	
	printf("Digite em metros a largura do terreno: ");
	scanf(" %f", &largura);
	
	printf("Digite em metros o comprimento do terreno: ");
	scanf(" %f", &comprimento);
	
	area = calculoarea(largura, comprimento);
	perimetro = calculoperimetro(largura, comprimento);
	
	printf("A area total em metros eh> %.2f\n", area);
	printf("O perimetro total em metros eh> %.2f\n", perimetro);
	
	return 0;
}
