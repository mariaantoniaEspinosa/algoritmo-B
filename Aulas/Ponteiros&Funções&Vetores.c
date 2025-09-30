//PASSAGENS(ponteiros), FUNÇÕES E VETORES
#include <stdio.h>

void lervetor(int *p){
	int i;
	for(i=0; i<5; i++){
		scanf("%d", p+i);
	}
	return;
}

void mostrarvetor(int *x){
	int i;
	for(i=0;i<5; i++){
		printf("%d\t", *(x+i));
	}
	printf("\n");
	return;
}

void somarvetores(int *v1, int *v2, int *v3){
	int i;
	for(i=0;i<5; i++){
		*(v3+i)= *(v1+i) + *(v2+i);
		//s[i] = v[i] + t[i]
	}
	return;
}

int main(){
	int v[5], t[5], s[5];
	
	printf("Digite os valores do vetor 1:\n");
	lervetor(v); // mesma coisa que &v[0]; passagem por referência
	
	printf("Digite os valores do vetor 2:\n");
	lervetor(t);
	
	printf("Seu vetor 1 eh:\n");
	mostrarvetor(v);
	
	printf("Seu vetor 2 eh:\n");
	mostrarvetor(t);
	
	printf("A soma do vetor 1 com o vetor 2 sera:\n");
	somarvetores(v, t, s);
	mostrarvetor(s);
	
	return 0;
}
