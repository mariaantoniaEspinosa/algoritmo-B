//ALOCAÇÃO DINÂMICA DE MEMÓRIA 
#include <stdlib.h>
#include <stdio.h>
int main(){
	int *x, i;
	
	printf("Quantidade de bytes do int: %d", sizeof(int));
	
	//alocação dinâmica de memória
	x = (int *) malloc (5 * sizeof (int));
	
	if(!x){
		printf("Erro na alocação!");
		exit(-1);
	}
	
	for(i=0; i<5; i++){
		*(x + i) = rand() % 10;  // x[i] = rand % 10;
		printf("x [%d] = %d\n", i, *(x+i)); // x[i]
	}
	
	// deslocar memória 
	
	free(x);
	
	return 0;
}
