//questão 9 Revisão
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int matriz[10][10], vetor[10];
	int i, j, k, cont=0;
	printf ("MATRIZ 10X10\n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			//printf ("Digite o número do elemento [%d][%d]:", i+1, j+1);
			//scanf("%f", &matriz[i][j]);
			matriz[i][j]= rand ()%50;
		}
	}
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			printf ("%d\t", matriz[i][j]);
		}
	printf ("\n");
	}	
	printf ("Digite 10 valores abaixo:\n");
	for(k=0;k<10;k++){
		scanf("%d", &vetor[k]);
	}
	printf ("Valores encontrados na matriz e sua posição:\n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			for(k=0;k<10;k++){
				if(matriz[i][j]==vetor[k]){
					printf("valor: %d -> posição [%d][%d]\n", matriz[i][j], i+1, j+1);
				}
			}
		}
	}
	return 0;
}
