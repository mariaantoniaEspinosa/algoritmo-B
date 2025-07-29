//questão 11 Revisão 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	srand(time(NULL));
	
	char palavra[20];
	int cont=0, i, j=0, soma=0;
	char inversa[20];
	
	printf ("Digite uma palavra: ");
	scanf ("%s", palavra);
	
	for(i=0; palavra[i]!='\0';i++){
		cont = i + 1;
	}
	
	if(i%2==0 ){
		printf ("Palavra inversa: "); 
			for (j=cont-1; j>=0; j--){
				printf ("%c", palavra[j]);
			}
	}else {
		for(i=0; palavra[i]!='\0';i++){
			if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
				soma++;
			}
		}
		printf ("Total de vogais = %d", soma);
	}
	return 0;
}
