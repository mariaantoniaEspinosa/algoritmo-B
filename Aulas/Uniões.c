//UNIÕES
#include <stdio.h>
#define Pi 3.14159
union angulo{
	float graus;
	float radianos;
};
int main(){
	union angulo ang;
	float auxgrau;
	char op;
	
	printf ("\nNumeros em graus (G) ou radianos(R)? ");
	scanf("%c", &op);
	
	printf("Digite o angulo: ");
	scanf("%f", &auxgrau);
	
	if (op == 'G' || op == 'g') {
      printf("Angulo digitado em graus %f\n", auxgrau);
      ang.radianos = auxgrau/180*Pi;
      printf("\nAngulo em radianos: %f\n",ang.radianos);
   } 
   else if (op == 'R' || op == 'r') {
        printf("Angulo digitado em radianos %f\n", auxgrau);
        ang.graus = auxgrau*180/Pi;
        printf("\nAngulo em graus: %f\n",ang.graus);
   }
   else printf("\nEntrada invalida!!\n");
	return 0;
}
