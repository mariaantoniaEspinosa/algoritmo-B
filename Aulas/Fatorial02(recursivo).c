#include <stdio.h>
unsigned int fatorial (unsigned int n){
	if (n==0){
		return 1;
	} else {
		return n * fatorial(n-1);
	}
}
int main(){
	unsigned int d;
	
	scanf("%i", &d);
	
	printf("O fatorial de %i = %i\n", d, fatorial(d));
	
	return 0;
}
