#include <stdio.h>
#include <stdlib.h>

/*
Problema "crescente"
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.
*/

int main()
{
    int x, y;

    printf("Digite dois numeros: \n");
    scanf("%d \n", &x);
    scanf("%d", &y);

    while( x != y ){

        if( x > y){
            printf("DECRESCENTE!\n");
        } else {
            printf("CRESCENTE!\n");
        }

        printf("\nDigite outros dois numeros: \n");
        scanf("%d \n", &x);
        scanf("%d", &y);
    }

    return 0;
}
