# QUESTÕES LISTA 05 - TEORIA SOBRE PONTEIROS 
## 1) 
char *a, b = 'B';

a = &b; a contém o endereço de B.

## 2)
p = &x;

sem ponteiros : x = 10;

com ponteiros: *p = x;

## 3)
float a; variavél do tipo float.
float *b; variavél float com ponteiro.
float c[10]; variavél float com espaço 10.
float d[3][3]; variável float, matiz.

## 4)
a == &pa (pa é um ponteiro, a está recebendo um endereõ sem ser ponteiro) = falsa
a == *pa (a está apontando para o valor de pa) = verdadeira
pa == *a = falsa
pa == &a = verdadeira

## 5)
x é inteiro, seu ponteiro para inteiro é px, que recebe endereço de x, px = &x;
Para fazer sua leitura correta = scanf("%d", px) OU scanf("%d", &x)

## 6)
int x, *px;
px = &x;
*px = *px/10;

## 7)
qual o erro do trecho abaixo?
 int main()
{
  int a, *pa;
*pa = 5; //o erro está aqui! O correto seria *pa = &a;
return 0;
}

## 8)
int *p;
int i = 3;
p = &i;
### a)
*p é igual a 3 = o conteúdo apontado por p é igual a 3 = verdadeira.
### b)
p é igual a 3 = p é igual ao endereço de i;
### c)
p armazena o endereço de i = sim = verdadeiro;
### d)
ao executar *p = 50, i terá valor 50 = o conteúdo apontado por p recebe 50, consequentemente i recebe o valor 50 = verdadeiro;
### e)
ao ser alterado o valor de i, *p será modificado = o conteúdo apontado por p será modificado = verdadeiro;
### f)
ao ser alterado o valor de i, p será modificado = p continuará sendo o endereço de i = falso;
