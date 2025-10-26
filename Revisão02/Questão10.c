//questão 10 Revisão do Conteúdo
#include <stdio.h>
int tamanho(char *s){
	int i=0;
	while (s[i] != '\0'){
		i++;
	}
	return i;
}
 void inverterstring (char *s){
 	int i=0, j = tamanho(s) - 1;
 	char temp;
 	while ( i < j ) {
 		temp = s [i];
 		s[i] = s[j];
 		s[j] = temp;
 		i++;
 		j--;
	 }
 }
 
 int main(){
 	char str[50];
 	
 	printf("Digite uma string: ");
 	scanf("%s", str);
 	
 	inverterstring(str);
 	
 	printf("String invertida: %s", str);
 	
 	return 0;
 }
