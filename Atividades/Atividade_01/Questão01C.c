//questão 01 - c 
//calcular a média e mostrar (valor da ultima compra)
float s = 0, media;
for(i=0;i<100;i++){
	s = s + c[i].valor;
	//ou s+= c[i].valor
}
media = s/100;
printf ("Media de compras = %f\n", media);
