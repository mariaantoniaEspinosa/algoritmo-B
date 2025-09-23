//ler 1 palavra e inverte-la dentro da mesma string
#include <stdio.h>
int main(){
	char p[30], *pi, *pf, aux;
	char s[50], *ps, i;
	ps = s;

	printf("Palavara: ");
	scanf("%s", ps);
	
	for(i=0; s[i]!='\0';i++){
		printf("%c\n", s[i]);
	}
	
	pi = pf = s;  //posição dos ponteiros no inicio da palavra 
	
	for(; *pf; pf++);
	
	pf--;  //posiciona na ultima letra
	
	for(; pi<pf ; pi++, pf--){
		aux = *pf;
		*pf = *pi;
		*pi = aux;
	}
	
	printf("Palavra invertida: %s", s);
	
	return 0;
}
