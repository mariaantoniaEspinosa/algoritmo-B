//Ler 1 string e um caracter. 
//Criar uma função que conte quantas vezes o caracter está na string e o substitua por '*'.
#include <stdio.h>

int contar(char *p, char l){
	int quantia = 0;
	
	for(; *p != '\0'; p++){
		if(*p == l){
			quantia++;
			*p = '*';
		}
	}
	return quantia;
}


int main(){
	char palavra[30], letra;
	int q;
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	fflush(stdin);
	
	printf("Digite uma letra:");
	scanf("%c", &letra);
	
	q = contar(palavra, letra);
	
	printf("Quantia: %d\n", q);
	puts(palavra);
	
	return 0;
}
