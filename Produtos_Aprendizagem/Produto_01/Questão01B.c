//questão 01 - b
//mostrar somente os clientes novos
int i;
for(i=0;i<100;i++){
	if(c[i].novo == 1){
		printf("%s", c[i].nome);
	}
}
