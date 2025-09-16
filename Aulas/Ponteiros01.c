#include <stdio.h>
int main(){
	int *p;
	int a = 12;
	
	printf("Valor de A = %d\n", a);
	
	p = &a;
	*p = 300;
	
	printf("Valor de P = %d", *p);
	
	return 0;
}
