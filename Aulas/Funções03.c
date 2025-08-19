#include <stdio.h>
float INSS (float s){
	if (s<= 1302){
		return s * 0.075;
	} else if(s<= 2571.29){
		return s * 0.09;
	} else if (s<=3856.94){
		return s * 0.12;
	} else if (s<=7507.49){
		return s * 0.14;
	} else {
		return s * 0.15;
	}
}

float IRPF (float s){
	if (s<= 2112){
		return 0;
	} else if ( s<= 2826.65){
		return s * 0.075;
	} else if (s<= 3751.05){
		return s * 0.15;
	} else if (s<= 4664.68){
		return s * 0.225;
	} else {
		return s * 0.275;
	}
}

float calculaDolar(float s, float d){
	float sd;
	sd = s/d;
	return sd;
}
int main (){
	float salarioB, descINSS;
	float descIRPF;
	float salarioDolar, dolar;
	
	printf ("Salario Bruto: ");
	scanf ("%f", &salarioB);
	
	descINSS = INSS (salarioB);
	printf ("Desconto INSS R$ %.2f\n", descINSS);
	
	descIRPF = IRPF (salarioB);
	printf("Desconto IRPF R$%.2f\n", descIRPF);
	
	printf ("1 dolar equivale a quantos reais?");
	scanf("%f", &dolar);
	salarioDolar = calculaDolar (salarioB, dolar);	
	printf ("Salario em dolar U$%.2f", salarioDolar);
	
	return 0;
}
