#include <stdio.h>
#include <stdlib.h>

struct produto {
    char tipo[50];
    int ano;
};

int main() {
    struct produto a[10];
    int i, q,sair=1;
    FILE *arquivo;

    arquivo = fopen("dados.txt", "r");

    if (!arquivo) {
        printf("Erro na abertura do arquivo!!!\n");
        exit(-1);
    }


   for (q = 0; sair == 1; q++) {
        if (fscanf(arquivo, "%s %d", a[q].tipo, &a[q].ano) !=2){
            printf("Termino da leitura\n");
            sair = 0;
        }
    }

    fclose(arquivo);


    printf("Dados lidos do arquivo:\n");
    for (i = 0; i < q-1; i++) {
        printf("%s %d\n", a[i].tipo, a[i].ano);
    }

    return 0;
}
