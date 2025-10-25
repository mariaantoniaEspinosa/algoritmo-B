//questão 03 Revisão de Conteúdos
#include <stdio.h>
void intercalar(int *valor1, int *valor2, int *valor3, int n){
	int i;
	for(i=0; i<n; i++){
		*valor3++ = *valor1++;
		*valor3++ = *valor2++;
	}
}

int main(){
	int valor1[10], valor2[10], valor3[20], i;
	
	for(i=0; i<10; i++){
		valor1[i]=i;
		valor2[i]= i + 10;
	}
	
	intercalar(valor1, valor2, valor3, 10);
	
	printf("\n");
	
	printf("Nao entendi essa questao - vetor intercalado = \n");
	for(i=0; i<20; i++){
		printf("%d", valor3[i]);
	}
	printf("\n");
	
	return 0;
}
