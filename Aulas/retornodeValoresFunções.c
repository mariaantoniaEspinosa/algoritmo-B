#include <stdio.h>
void bissexto(int ano){
	if(ano%400==0){
		printf("Bissexto");
	} else if(ano%100==0){
		printf("Nao eh bissexto");
	} else if(ano%4==0){
		printf("Bissexto");
	} else{
		printf("Nao eh bissexto");
	}
	return;
}
int main(){
	int a;
	printf("Infome o ano: ");
	scanf("%d", &a);
	
	bissexto(a);
	return;
}
