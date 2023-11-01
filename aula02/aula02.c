// O comando include serve para incluir bibliotecas de funções

// <stdio.h>  Funções de entrada e saída de dados
// <string.h>  Funções de string

// Declaração de variáveis
// tipo nome = valor;
// int quantidade = 100;


#include <stdio.h>
#include <string.h>




int main()
{

   // int idade;                // Valores inteiros
   // double salario, altura;   // Valores decimais
   // char genero;      // Aceita 1 caractere e dentro de ''
   // char nome[50];    // Para textos precisa ser como vetor e dentro de "";

    int idade = 20;
    double salario = 5800.5;
    double altura = 1.63;
    char genero = 'F';
    char nome[50] = "Marta Silva";

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);

    return 0;
}

