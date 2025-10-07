#include <stdio.h>
int funcao(int n){
	int i;
	int f =0;
	
	for(i=1; i<=n; i++){
		f = f + i;
	}
	return f;
}
int main(){
	int d;
	scanf("%i", &d);
	
	printf("%i", funcao(d));
	
	return 0;
}
