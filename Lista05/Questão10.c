//questão 10 lista 05
#include <stdio.h>
int main(){
	char s[100];
	char *p;
	
	printf("Digite a string: ");
	gets(s);
	
	for(p = s; *p != '\0'; p++){
		printf("%c\n", *p);
	}
	
	return 0;
}
