//questão 3 
#include <stdio.h>
#include<string.h>
char s[40];
int escreve(){
	int i;
	for(i=0;s[i];i++){
		printf("%c\n", s[i]);
	}
	return i;
}
int main(){
	int x;
	printf(" Digite uma palavra: ");
	gets(s);
	x = escreve();
	printf("%d", x);
	return 0;
}
