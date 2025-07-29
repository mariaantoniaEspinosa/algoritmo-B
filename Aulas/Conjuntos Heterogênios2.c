//CONJUNTOS HETEROGÊNIOS
#include <stdio.h>
//Definicição da estrutura
struct vendedor{
	int cod;
	float salario, vendas, comissao;
};
int main(){
	struct vendedor v[4];
	int i;
	//leitura de dados
	printf("Codigo do vendedor: \n");
	printf("Salario fixo: \n");
	printf("Total de vendas: \n");
	for(i=0;i<4;i++){
		printf("Vendedor %i+1: \n", i);
		scanf("%i", &v[i].cod);
		scanf("%f", &v[i].salario);
		scanf("%f", &v[i].vendas);
	}
	//cálculo da comisssão
	if(v[i].vendas <= 1000){
		printf("Comissao 3%%");
		v[i].comissao = v[i].vendas * 0.03;
	}else if(v[i].vendas <= 2000){
		printf("Comissao 5%%");
		v[i].comissao = v[i].vendas * 0.05;
	}else{
		printf("Comissao 10%%");
		v[i].comissao = v[i].vendas * 0.10;
	}
	//exibição dos resultados
	for(i=0;i<4;i++){
		printf("\n Codigo vendedor %i", v[i].cod);
		printf("\n Comissao R$ %.2f", v[i].comissao);
		printf("\n Salario total R$ %.2f", v[i].salario+v[i].comissao);
		printf("\n Vendas total %f", v[i].vendas);
	}
	return 0;
}
