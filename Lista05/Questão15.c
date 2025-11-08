//questão 15 lista 5
#include <stdio.h>
int main(){
	char s[100], letra;
	char *p;
	
	printf("Digite uma palavra: ");
	gets(s);
	
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	
	for(p=s; *p != '\0'; p++){
		if(*p == letra){
			*p = '\0';
			break;
		}
	}
	
	printf("Nova palavra: %s", s);
	
	return 0;
}
