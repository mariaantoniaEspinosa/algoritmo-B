#include <stdio.h>
#include <string.h>
struct produtos{
	int cod;
	char nome[30];
	int und;
	float custo;
	float venda;
	float percentual;
	int estoque;
};
int main (){
	struct produtos p[999];
	int i=0, opcao, j=0;
	char escolha;
	
	printf ("\n***INFORME***\n");
	
	printf ("-> Digite 1 para armazenar dados ou 0 para sair: ");
	scanf (" %d", &opcao);
	
	while(opcao == 1){
		printf ("O codigo do produto: ");
		scanf (" %d", &p[i].cod);
		printf ("O nome do produto: ");
		scanf(" %[^\n]", p[i].nome);
		printf ("O total de unidades: ");
		scanf (" %d", &p[i].und);
		printf ("O preco de custo: ");
		scanf (" %f", &p[i].custo);
		printf ("O percentual de lucro desejado sobre o preco de custo: ");
		scanf (" %f", &p[i].percentual);
		printf ("O total em estoque: ");
		scanf (" %d", &p[i].estoque);
		p[i].venda = p[i].custo + ((p[i].custo * p[i].percentual)/100);
		i++;
		printf ("-> Digite 1 para armazenar dados ou 0 para sair: ");
		scanf (" %d", &opcao);
	}
	
	if (opcao == 0){
		do{
			printf ("\n***ESCOLHA:***\n");
			printf ("a: listar os dados de todos os produtos\n");
			printf ("b: listar os dados de um produto, conforme o codigo\n");
			printf ("c: listar os produtos cuja quantidade em estoque eh zero\n");
			printf ("d: mostrar os dados do produto de maior valor de venda\n");
			printf ("e: mostrar os dados do produto de menor valor de venda\n");
			printf ("f: sair\n");
			printf ("Escolha: ");
			scanf ("%c", &escolha);	
			if (escolha == 'a'){
				printf ("\n***DADOS***\n");
				for (j=0; j<i; j++){
					printf ("Codigo: %d\n", p[j].cod);
					printf ("Nome: %s\n", p[j].nome);
					printf ("Unidades: %d\n", p[j].und);
					printf ("Custo: %f\n", p[j].custo);
					printf ("Venda: %f\n", p[j].venda);
					printf ("Lucro em %%: %f\n", p[i].percentual);
					printf ("Estoque: %d\n", p[j].estoque);	
				}	
			}else if (escolha == 'b'){
				
			}
		}
	}
	return 0;
}
