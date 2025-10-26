//questão 13 Revisão de Conteúdos
#include <stdio.h>
struct Produto{
	int cod;
	char nome[30];
	char und[20];
	float precocusto, precovenda;
	int quantia;
} produtos[100];

int total = 0;

void cadastrar(){
	char opcao;
	
	do{
		printf("Codigo: ");
		scanf("%d", &produtos[total].cod);
		printf("Nome: ");
        scanf("%s", produtos[total].nome);
        printf("Unidade: ");
        scanf("%s", produtos[total].und);
        printf("Preco custo: ");
        scanf("%f", &produtos[total].precocusto);
        printf("Preco venda: ");
        scanf("%f", &produtos[total].precovenda);
        printf("Quantidade: ");
        scanf("%d", &produtos[total].quantia);
        total++;
        printf("Cadastrar Produto? (s\n): ");
        scanf(" %c", &opcao);
	}
	while (opcao == 's');
}

void listartodos(){
	int i;
	for(i=0; i<total; i++){
		printf(" %d\n %s\n %.2f\n %.2\n %d\n", produtos[i].cod, produtos[i].nome, produtos[i].und, produtos[i].precocusto, produtos[i].precovenda, produtos[i].quantia);
	}
}

void listarporcodigo(){
	int cod, i, achou = 0;
	printf("Digite o codigo: ");
	scanf("%d", &cod);
	for(i=0; i<total; i++){
		if(produtos[i].cod == cod){
			 printf("%d\n %s\n %s\n %.2f\n %.2f\n %d\n", produtos[i].cod, produtos[i].nome,produtos[i].und, produtos[i].precocusto, produtos[i].precovenda, produtos[i].quantia);
			 achou = 1;
		}
		if (!achou){
			printf("Produto nao encontrado\n");
		}
	}
}

void listarzerados(){
	int i;
	for(i=0; i<total; i++){
		if(produtos[i].quantia == 0){
			printf("%d\n %s\n %.2f\n", produtos[i].cod, produtos[i].nome, produtos[i].precovenda);
		}
	}
}

void maiorvalor(){
	int i, ind=0;
	for(i=1; i<total; i++){
		if(produtos[i].precovenda > produtos[i].precocusto){
			ind = i;
		}
	printf("Produto mais caro: %s (%.2f)\n", produtos[ind].nome, produtos[ind].precovenda);
	}
}

int main(){
	int opcao;
	cadastrar();
	
	do{
		printf("\n 1-Listar todos\n 2-Listar por codigo\n 3-Listar zerados\n 4-Maior valor\n  0-Sair\n");
        scanf("%d", &opcao);
        if (opcao == 1) listartodos();
        else if (opcao == 2) listarporcodigo();
        else if (opcao == 3) listarzerados();
        else if (opcao == 4) maiorvalor();
	}
	while(opcao != 0);
	
	return 0;
}
