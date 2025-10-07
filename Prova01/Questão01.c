//1 a)
struct livro{
  char titulo[100];
  char autor[100];
  int ano;
  int qtde;
  int disponivel;
};
struct livro l[100];

//1 b)
int main(){
  int i;
  for(i=0; i<100; i++){
    printf("Titulo: %s\n", l[i].titulo);
    printf("Autor: %s\n", l[i].autor);
    printf("Qtde retiradas = %d\n", l[i].qtde);
    if(l[i].disponivel==1){
      printf("Exemplar na biblioteca!");
    } 
    else {
      printf("Exemplar emprestado!");
    }  
}
  
//1 c)
float media, soma =0;
  for(i=0; i<1000; i++){
    soma += l[i].qtde;
  }
  media = soma/10000;
  printf("Média de retiradas = %f", media);
}
