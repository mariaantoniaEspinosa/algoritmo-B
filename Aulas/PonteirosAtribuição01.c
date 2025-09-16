//expressões - atribuições
#include <stdio.h>
int main(){
	int i = 100;
	int *p1, *p2;
	
	p1 = &i;
	p2 = p1;
	
	printf("hexadecimal = %p  %p\n", p2, p1);
	*p2 = *p2 * 4;
	printf("decimal = %d %d", *p1, *p2);
	return 0;
}
