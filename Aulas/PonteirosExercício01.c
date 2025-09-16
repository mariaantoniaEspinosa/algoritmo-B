#include <stdio.h>
int main(){
	float *pn1, *pn2, *pmedia;
	float n1, n2, media; 
	
	//incialização 
	pn1 = &n1;
	pn2 = &n2;
	pmedia = &media;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", pn1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", pn2);
	
	printf ("%f, %f", *pn1, *pn2);
	*pmedia = (*pn1 + *pn2)/2;
	
	printf("\nMedia = %.2f", *pmedia);
	
	return 0;
}
