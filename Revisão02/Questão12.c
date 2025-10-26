//questão 12 Revisão de Conteúdos
#include <stdio.h>
void lermatriz(int matriz[3][3]){
	int i, j;
	
	printf("Digite valores para a posicao: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("[%d][%d]:", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

void somamatriz(int a[3][3], int b[3][3], int c[3][3]){
	int i, j;
	for(i = 0; i<3; i++){
		for(j=0; j<3; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

int maiorelemento(int matriz[3][3]){
	int i, j, maior = matriz[0][0];
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(matriz[i][j]> maior){
				maior = matriz[i][j];
			}
		}
	}
	return maior;
}

int main(){
	int a[3][3], b[3][3], c[3][3], i, j;
	
	printf("Digite a matriz A: \n");
	lermatriz(a);
	
	printf("Digite a matriz B: \n");
	lermatriz(b);
	
	somamatriz(a, b, c);
	
	printf("Matriz C:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d\t", c[i][j]);
		}
	printf("\n");
	}
	
	printf(" Maior A: %d\n", maiorelemento(a));
	
	printf(" Maior B: %d\n", maiorelemento(b));
	
	return 0;
}
