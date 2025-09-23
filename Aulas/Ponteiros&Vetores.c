// PONTEIROS E VETORES
#include <stdio.h>
int main(){
	

	int v[10], *p, i;
	p = &v[0]; // ou p = v;

	//LEITURA DO VETOR
	for(i=0; i<10; i++, p++){
		//scanf("%i", &v[i]);
		scanf ("%i", p);
	}
	
	p = v;
	
	for(i=0;i<10; i++){
		printf("%i\t", v[i]);
	} 
	
	
	return 0;
}
