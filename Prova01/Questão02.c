//2
struct produto{
	char cod[20];
	float precoc;
	float precov;
	float lucro;
};

int main(){
	struct produto p[50];
	int i;
	float lucrototal=0, perlucro;
	
	for(i=0; i<50; i++){
		printf("Codigo: ");
		scanf("%s", p[i].cod);
		printf("Preco custo: ");
		scanf("%f", &p[i].precoc);
		printf("Preco venda: ");
		scanf("%f", &p[i].precov);
		p[i].lucro = p[i].precov - p[i].precoc;
		lucrototal += p[i].lucro;
	}
	printf("Lucro total = %f", lucrototal);
	
	printf("Produtos com +50% lucro: \n");
	for(i=0; i,50; i++){
		perlucro = p[i].lucro * 100 / p[i].precoc;
		if(perlucro > 50){
			printf("Codigo: %s", p[i].cod);
		}
	}
	return 0;
}
