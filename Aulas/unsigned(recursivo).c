//RECURSIVIDADE
#include <stdio.h>
unsigned int fatorial(unsigned int n){  //n=6
	int i;
	unsigned int f=1;
	
	for(i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
int main(){
	unsigned int d;
	
	scanf("%i", &d);
	
	printf("O fatorial de %i = %i\n", d, fatorial(d));
	
	return 0;
}
