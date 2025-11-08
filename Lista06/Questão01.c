//lista 6 questão 01
#include <stdio.h>
void vertical(char *str){
	while(*str != '\0'){
		printf("%c\n", *str);
		str++;
	}
}
int main(){
	char s[100];
	
	printf("Digite uma palavra: ");
	gets(s);
	
	vertical(s);
	
	return 0;
}
