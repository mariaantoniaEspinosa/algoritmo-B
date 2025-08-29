#include <stdio.h>
float Desconto(float preco, float percentual){
	if (percentual<0 || percentual>100){
		printf("Percentual invalido");
		return 0.0;
	} else{
		return preco * (percentual/100);
	}
}
int main(){
	float preco, percentual, desconto, total;
	
	printf("Digite o preco do produto em R$: ");
	scanf(" %f", &preco);
	
	printf("Digite o percentual (%%) de desconto: ");
	scanf(" %f", &percentual);
	
	desconto = Desconto(preco, percentual);
	total = preco - desconto; 
	
	printf("Preco original: R$%.2f\n", preco);
	printf("Desconto em R$%.2f\n", desconto);
	printf("Valor a pagar: R$%.2f\n", total);
	
	return 0;
}
