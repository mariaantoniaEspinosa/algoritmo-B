#include <stdio.h>
int m[3][3];
void lermatriz(){
	int i, j;
	printf ("Insira os elementos da matriz:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf ("[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	return;
}
void imprimirmatriz(){
	int i, j;
	printf("\nMatriz digitada:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t", m[i][j]);
		}
	printf("\n");
	}
}
void menorelemento(){
	int i, j, menor=9999;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if (m[i][j]<menor){
				menor = m[i][j];
			}
		}
	}
	printf("\n");
	printf ("O menor elemento da matriz = %d\n", menor);
	return;
}
void maiorlinha(){
	int i, j, maior[3];
	for(i=0;i<3;i++){
		maior[i]=-9999;
		for(j=0;j<3;j++){
			if(m[i][j]>maior[i]){
				maior[i]=m[i][j];
			}
		}
	printf ("Maior da linha %d = %d\n", i, maior[i]);
	}
	return;
}
int main(){
	lermatriz();
	imprimirmatriz();
	menorelemento();
	maiorlinha();
	return 0;
}
