//questão 04 Revisão de Conteúdos
#include <stdio.h>
void procurarvalor(int m[10][10], int valor){
	int i, j, achou=0;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(m[i][j]==valor){
				printf("Valor %d encontrado na posicao [%d][%d]\n", valor, i+1, j+1);
				achou=1;
			}
		}
	}
	if(!achou){
		printf("Valor nao encontrado!\n"); //! significa que o valor dado segue sendo verdadeiro
	}
}

int main(){
	int matriz[10][10], i, j, valor;
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			matriz[i][j] = rand()%100;
		}
	}
	
	printf("Matriz:\n");
	for(i=0; i<10; i++){
		for(j=0;j<10;j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Digite um valor para procurar: ");
	scanf("%d", &valor);
	
	procurarvalor(matriz, valor);
	
	return 0;
}
