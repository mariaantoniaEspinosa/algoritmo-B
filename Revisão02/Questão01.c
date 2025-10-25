//quest?o 01 Revis?o de Conte?dos 
#include <stdio.h>
float calculocomissao(float vendas){
	float comissao = 0.0;
	if(vendas <= 1000){
		comissao = vendas * 0.03; //3%
	}
	else if(vendas <= 2000){
		comissao = vendas * 0.05; //5%
	}
	else{
		comissao = vendas * 0.10;
	}
	return comissao;
}

int main(){
	int cod;
	float salariofixo, totalvendas, salariototal, comissao;
	
	printf("Digite o codigo do vendedor: ");
	scanf("%d", &cod);
	
	printf("Digite o salario fixo do vendedor: ");
	scanf("%f", &salariofixo);
	
	printf("Digite o total de vendas do vendedor: ");
	scanf("%f", &totalvendas);
	
	comissao = calculocomissao(totalvendas);
	salariototal = salariofixo + comissao;
	
	printf("\n");
	
	printf("Codigo do vendedor: %d\n", cod);
	printf("Total de vendas: R$ %.2f\n", totalvendas);
	printf("Comissao: R$%.2f\n", comissao);
	printf("Salario fixo: R$%.2f\n", salariofixo);
	printf("Salario total: R$%.2f\n", salariototal);
	
	return 0;
}
