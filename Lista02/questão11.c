#include <stdio.h>
float calculototal(float preco, int quantidade){
	return preco * quantidade;
}
float calculodesconto(float total){
	if(total >= 1000.0){
		return total * 0.10;
	} else if (total >= 500.0){
		return total * 0.08;
	} else if (total >= 100.0){
		return total * 0.05;
	} else {
		return 0.0;
	}
}
int main(){
	float preco, total, desconto, pagar, percentual;
	char unidade[20];
	int  quantidade;
	
	printf("\t PREENCHA \n");
	
	printf("Digite o preco do produto em R$: ");
	scanf("%f", &preco);
	fflush(stdin);
	
	printf("Digite a unidade do produto (kilo, litro, metro...): ");
	fgets(unidade, 20, stdin);
	
	
	printf("Digite a quantidade vendida: ");
	scanf(" %d", &quantidade);
	
	total = calculototal(preco, quantidade);
	desconto = calculodesconto(total);
	pagar = total - desconto;
	
	if(total >= 1000.){
		percentual = 10.0;
	} else if(total >= 500.0){
		percentual = 8.0;
	} else if(total >= 100.0){
		percentual = 5.0;
	} else {
		percentual = 0.0;
	}
	
	printf("Preco do produto: R$%.2f\n", preco);
	printf("Unidade: %s\n", unidade);
	printf("Quantia de vendas: %.2d\n", quantidade);
	printf("Valor total: R$%.2f\n", total);
	printf("Desconto: R$%.2f\n", desconto);
	printf("Seu percentual de desconto foi de %.2f%%\n", percentual);
	printf("Valor com desconto: R$%.2f\n", pagar);
	
	return 0;
	
}
