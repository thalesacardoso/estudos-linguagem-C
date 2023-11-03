
// O comando include serve para incluir bibliotecas de funções
// <stdio.h>  Funções de entrada e saída de dados
// <string.h>  Funções de string

#include <stdio.h>
#include <string.h>

int main()
{

    int num , soma;
    soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);


    while(num != 0){
        soma = soma + num;

        printf("Digite um numero: ");
        scanf("%d", &num);
    };

    printf("Valor total: %d",soma );



    return 0;
}

