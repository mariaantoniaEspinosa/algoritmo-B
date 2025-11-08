//questão 13 lista 5
#include <stdio.h>
int main(){
	char s[100];
	char *i, *f;
	int p = 1;
	
	printf("Digite uma palavra: ");
	gets(s);
	
	i = s;
	while (*i != '\0' && *i != '\n'){
		i++;
	}
	
	i--;
	
	f = s;
	while(f < i){
		if(*f != *i){
			p = 0;
			break;
		}
		f++;
		i--;
	}
	
	if(p == 1){
		printf("Palindromo!\n");
	}
	else{
		printf("Nao eh Palindromo!");
	}
	
	return 0;
}
