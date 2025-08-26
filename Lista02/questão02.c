#include <stdio.h>
float v[15]; // variável global

void mostrarvetor(){
	int a;
	printf("Vetor: \n");
	for(a=0;a<15;a++){
		printf("%.0f\t", v[a]);
	}
	return;
}
void calculo(float x){
	int i;
	for(i=0;i<15;i++){
		v[i]=v[i]*x;
	}
	return;
} 

int main(){
	float n;
	int i;
	
	printf("Digite um numero: ");
	scanf(" %f", &n);
	//gerando os elementos de v;
	for(i=0;i<15;i++){
		v[i]=rand()%30;
	}
	mostrarvetor();
	calculo(n);
	mostrarvetor();
	
	return 0;
	
}
