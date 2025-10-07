//3
#include <stdio.h>
int pesoideal(float altura, float peso, char tipo){
	float pesoi;
	//
	if(tipo == 'M'){
		pesoi = (62.1 * altura) - 44.7;
	}
	else{
		pesoi = (72.7 * altura) - 58;
	}
	//
	if(peso == pesoi){
		return 0;
	}
	else if(peso>pesoi){
		return 1;
	}
	else {
		return -1;
	}
	//
}

int main(){
	float a, p;
	char t;
	int r;
	
	scanf("%f", &a);
	scanf("%f", &p);
	scanf("%c", &t);
	
	r = pesoideal(a, p, t);
	
	if(r==0){
		printf("Esta no peso ideal!");
	}
	else if (r==1){
		printf("Esta acima do peso!");
	}
	else {
		printf("Esta abaixo do peso!");
	}
	
	return 0;
}
