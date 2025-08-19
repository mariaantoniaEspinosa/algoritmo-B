#include <stdio.h>
#include <stdlib.h>

struct produto {
    char tipo[50];
    int ano;
};

int main() {
    struct produto a[3];
    int i, q=0,sair=1;
    FILE *arquivo;

    arquivo = fopen("dados.txt", "r");

    if (!arquivo) {
        printf("Erro na abertura do arquivo!!!\n");
        exit(-1);
    }


   for (i = 0; i < 3; i++) {
        if (fscanf(arquivo, "%s %d", a[i].tipo, &a[i].ano) !=2){
            printf("Término da leitura");
        }
    }

    fclose(arquivo);


    printf("Dados lidos do arquivo:\n");
    for (i = 0; i < 3; i++) {
        printf("%s %d\n", a[i].tipo, a[i].ano);
    }

    return 0;
}
