#include <stdio.h>
#include <string.h>
void vertical(const char *s){
	int i;
	for(i=0; s[i]!='\0'; i++){
		printf("%c\n", s[i]); // o \n aqui é o responsável pela quebra de linha
	}
}
int main(){
	char string[100];
	
	printf("Digite uma frase: ");
	gets(string);
	
	fflush(stdin);
	
	printf("Texto na vertical: \n");
	vertical(string);
	
	return 0;
}
