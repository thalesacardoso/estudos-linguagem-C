
// O comando include serve para incluir bibliotecas de funções
// <stdio.h>  Funções de entrada e saída de dados
// <string.h>  Funções de string

#include <stdio.h>
#include <string.h>

int main()
{

    int hora;
    printf("Digite uma hora do dia: ");
    scanf("%d", &hora);

    if (hora < 12) {
        printf("Bom dia!\n");
    } else {
        printf("Boa tarde!\n");
    }

    return 0;
}

