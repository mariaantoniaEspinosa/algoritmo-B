//questão 10 Revisão
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main (){
	int matriz[4][4];
	int i, j, soma=0, produto=1, soma2=0, soma3=0;
	printf ("MATRIZ 4X4\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			matriz[i][j]= rand ()%50;
			printf ("%d\t", matriz[i][j]);
		}
		printf ("\n");	
	}
	for(j=0;j<4;j++){
		soma = matriz[j][0] + soma;
	}
	for(i=0;i<4;i++){
		produto = matriz[0][i] * produto;
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if (i==j){
				soma2 += matriz[i][j];
			}
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			soma3 += matriz[i][j];
		}	
	}	
	printf ("Soma dos elementos da primeira coluna: %d\n", soma);
	printf ("O produto dos elementos da primeira linha: %d\n", produto);
	printf ("A soma da diagonal principal: %d\n", soma2);
	printf ("A soma de todos os elementos da matriz: %d\n", soma3);
	return 0;
}
