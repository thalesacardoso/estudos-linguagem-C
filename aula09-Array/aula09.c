
// O comando include serve para incluir bibliotecas de funções
// <stdio.h>  Funções de entrada e saída de dados
// <string.h>  Funções de string

#include <stdio.h>
#include <string.h>

int main()
{
    // Perguntar quantos numeros
    // digitar os numeros
    // mostrar os numeros digitados

    int x;

    printf("Quantos numeros quer digitar? ");
    scanf("%d", &x);

    // Declaração de um vetor
    double vet[x];

    for(int i = 0; i < x; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nNumeros digitados: \n");

    for(int i = 0; i < x; i++) {
        printf("%.2lf \n", vet[i]);
    }
        return 0;
}

