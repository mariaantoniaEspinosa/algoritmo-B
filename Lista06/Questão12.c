//questão 12 lista 6
#include <stdio.h>
#include <string.h>
struct veiculo{
	char placa[10];
	char nome[50];
	char telefone[20];
	float valor;
	int pago;
};

void dados(struct veiculo *v){
	
	printf("Placa : ");
	scanf("%s\n", (*v).placa);
	
	printf("Nome: ");
	scanf("%s\n", (*v).nome);
	
	printf("Telefone: ");
	scanf("%s\n", (*v).telefone);
	
	printf("Valor em R$: ");
	scanf("%.2f\n", (*v).valor);
	
	printf("Foi pago? (1 para 'sim' 2 para 'nao'): ");
	scanf("%d\n", &(*v).pago);
}

void mostrar(struct veiculo *v){
	printf("Placa: %s\n", (*v).placa);
	printf("Nome: %s\n", (*v).nome);
	printf("Telefone: %s\n", (*v).telefone);
	printf("Valor: %.2f\n", (*v).valor);
	if((*v).pago ==1){
		printf("Situacao: pago\n");
	}
	else{
		printf("Situacao: nao pago\n");
	}
}

float total(struct veiculo *v, int n){
	float soma=0;
	int i;
	for(i=0; i<n; i++){
		if ((*(v+i)).pago == 1){
			soma+= (*(v+i)).valor;
		}
	}
	return soma;
}

int main(){
	struct veiculo v[10];
	int quantia = 0, op, i;
	
	do{
		printf("\n");
		printf("1 - cadastrar veiculo\n");
		printf("2 - mostrar todos os veiculos\n");
		printf("3 - mostrar total recebido\n");
		printf("0 - sair\n");
		printf("Escolha:");
		scanf("%d", &op);
		
		if(op == 1 && quantia < 10){
			dados(&v[quantia]);
			quantia++;
		}
		else if(op == 2){
			for(i = 0; i< quantia; i++){
				mostrar(&v[i]);
			}
		}
		else if(op == 3){
			printf("Total recebido: R$%.2f\n", total(v, quantia));
		}
	}while (op != 0);
	
	return 0;
}
