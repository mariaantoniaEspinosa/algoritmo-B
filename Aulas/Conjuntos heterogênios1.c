//CONJUNTOS HETEROGÊNIOS
#include <stdio.h>
//Definicição da estrutura
struct vendedor{
	int cod;
	float salario, vendas, comissao;
};
int main(){
	struct vendedor v;
	//leitura de dados
	printf("Codigo do vendedor: ");
	scanf("%i", &v.cod);
	printf("Salario fixo: ");
	scanf("%f", &v.salario);
	printf("Total de vendas: ");
	scanf("%f", &v.vendas);
	//cálculo da comisssão
	if(v.vendas <= 1000){
		printf("Comissao 3%%");
		v.comissao = v.vendas * 0.03;
	}else if(v.vendas <= 2000){
		printf("Comissao 5%%");
		v.comissao = v.vendas * 0.05;
	}else{
		printf("Comissao 10%%");
		v.comissao = v.vendas * 0.10;
	}
	//exibição dos resultados
	printf("\n Comissao R$ %.2f", v.comissao);
	printf("\n Salario total R$ %.2f", v.salario+v.comissao);
	return 0;
}
