#include <stdio.h>
#include <stdlib.h>
int *alocarvetor(int tam){
	
	int * p;
	
	p = (int *) malloc (tam * sizeof(int));
	
	if(!p){
		printf("Erro na alocação!");
		exit (-1);
	}
	
	return p;
}

void somarvetores(int * x, int * y, int * z, int t){
	int i;
	
	for(i=0; i<t; i++){
		*(z + i) = *(x + i) + *(y + i);
		// z[i] = x[i] + y[i]		
	}
	
	return ;
}

void mostrarvetor(int *v, int t){
	int i;
	
	for(i=0; i<t; i++){
		printf("%d\t", *(v+i));
	}
	
	return ;
}

void lervetor(int *v, int t){
	int i;
	
	for(i=0; i<t; i++){
		printf("%d: ", i);
		scanf("%d", v+i);
	}
	
	return ;
}


int main(){
	int *a, *b, *c, tam;
	
	scanf("%d", &tam);
	
	a = alocarvetor(tam);
	
	b = alocarvetor(tam);
	
	c = alocarvetor(tam);
	
	lervetor(a, tam); 
	lervetor(b, tam);
	
	somarvetores(a, b, c, tam);
	
	mostrarvetor(c, tam);
	
	free(a);
	free(b);
	free(c);
	
	return 0;

}
