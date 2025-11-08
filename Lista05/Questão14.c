//questão 14 lista 5
#include <stdio.h>

int main(){
	char a[100], b[100];
	char *p, *q;
	
	printf("Digite a palavra 1: ");
	gets(a);
	
	printf("Digite a palavra 2: ");
	gets(b);
	
	p = a;
	q = b;
	
	while(*p != '\0' && *p != '\n' && *q != '\0' && *q != '\n'){
		if (*p != *q) {
			break;
		}
		p++;
		q++;
	}
	
	if(*p == *q){
		printf("As palavras sao iguais\n");
	}
	else if(*p>*q){
		printf("A palavra 1 eh maior\n");
	}else{
		printf("A palavra 2 eh maior\n");
	}
	
	return 0;
	
}
