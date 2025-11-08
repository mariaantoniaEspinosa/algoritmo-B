//questão 17 lista 5
#include <stdio.h>
int main(){
	int v1[15], v2[15], op[4], *p1, *p2, *po, i;
	
	printf("Digite 15 valores para o primeiro vetor:\n");
	for( p1 = v1; p1 < v1 +15; p1++){
		scanf("%d", p1);
	}
	
	printf("Digite 15 valores para o segundo vetor:\n");
	for( p2 = v2; p2 < v2 +15; p2++){
		scanf("%d", p2);
	}
	
	printf("Digite as 4 operacoes\n");
	printf(" 0 -> soma\n");
	printf(" 1 -> subtracao\n");
	printf(" 2 -> multiplicacao\n");
	printf(" 3 -> divisao\n");
	
	for(po = op; po < op + 4; po++){
		scanf("%d", po);
	}
	
	printf("Resultados = \n");
	
	for(po = op; po<op + 4; po++){ //PRECISA DIGITAR AS 4 OPÇÕES DE OPERAÇÕES
		printf("Operacao -> %d\n", *po);
		
		for(i=0; i<15; i++){
			if(*po == 0){
				printf("%d", v1[i] + v2[i]);
			}
			else if(*po == 1){
				printf("%d", v1[i] - v2[i]);
			}
			else if(*po == 2){
				printf("%d", v1[i] * v2[i]);
			}
			else if(*po == 3){
				if(v2[i] != 0){
					printf("%d", v1[i] / v2[i]);
				}
				else{
					printf("erro");
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}
