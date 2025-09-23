//PONTEIROS E STRINGS
#include <stdio.h>
#include <string.h>
int main(){
	char s[50], *ps, i;
	ps = s;
	
	printf("Palavara: ");
	scanf("%s", ps);
	
	for(i=0; s[i]!='\0';i++){
		printf("%c\n", s[i]);
	}
	
	for(;*ps!='\0';ps++){
		//*ps pode substituir *ps!='\0'
		printf("%c\n", *ps);
	}
	
	//CONTAR QUANTAS LETRAS A PALAVRA POSSUI
	for (ps=s, tamanho=0;  *ps; ps++, tamanho++);	
	printf("A palavra %s tem %d letras", s, tamanho);
  
	return 0;
}
