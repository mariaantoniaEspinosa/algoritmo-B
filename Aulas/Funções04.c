//VARIAVÉL GLOBAL
#include <stdio.h>
int v[10]; // variável global
void mostrarPares (){ // função sem parametros
	int i;
	printf ("Elementos pares:\n");
	for (i=0;i<10;i++){
		if(v[i]%2==0){
			printf ("%d na posicao %d\n", v[i], i+1);
		}
	}
return ;
}

int main(){
	int i;
	printf ("Digite 10 numeros inteiros: \n");
	for(i=0;i<10;i++){
		scanf("%i", &v[i]);
	}
	mostrarPares();
	return 0;
}
