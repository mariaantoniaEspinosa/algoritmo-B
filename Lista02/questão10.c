#include <stdio.h>
char s[50];
int contarletra(char l){
	int i, q=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]==l){
			q++;
		}
	}
	return q;
}
int main(){
	char letra;
	
	printf("Uma palavra: ");
	scanf("%s", s);
	fflush(stdin);
	printf("Uma letra: ");
	scanf("%c", &letra);
	printf("A letra %c ocorre %d vez(es) na palavra %s\n", letra, contarletra(letra), s);
	
	return 0;
}
