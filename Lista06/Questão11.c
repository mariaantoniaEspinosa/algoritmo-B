//questão 11 lista 6
#include <stdio.h>
int *maiorelemento(int *v, int n){
	int *maior = v, i;
	for(i = 1; i<n; i++){
		if(*(v+i) > *maior){
			maior = v + i;
		}
	}
	return maior;
}

int main(){
	int v[20], i;
	
	printf("Digite o vetor: \n");
	
	for(i=0; i<20; i++){
		printf("v[%d] = ", i);
		scanf("%d", &v[i]);
	}
	
	int *m = maiorelemento(v, 20);
	printf("Maior elemento = %d\n", *m);
	
	return 0;
}
