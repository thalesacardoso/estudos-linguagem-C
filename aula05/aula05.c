
// O comando include serve para incluir bibliotecas de funções
// <stdio.h>  Funções de entrada e saída de dados
// <string.h>  Funções de string

#include <stdio.h>
#include <string.h>

int main()
{

    double salario1, salario2;
    char nome1[50], nome2[50];
    int idade;
    char sexo;

    printf("Nome da primeira pessoa: ");
    gets(nome1);  // Leitura de texto

    printf("Salario da primeira pessoa: ");
    scanf("%lf", &salario1); // Leitura de dados numéricos

    printf("Nome da segunda pessoa: ");
    fseek(stdin,0,SEEK_END);  // Limpeza de buffer
    gets(nome2);

    printf("Salario da segunda pessoa: ");
    scanf("%lf", &salario2);

    printf("Digite uma idade: ");
    scanf("%d", &idade);

    printf("Digite um sexo (F/M): ");
    fseek(stdin,0,SEEK_END);
    scanf("%c", &sexo);

    printf("Nome 1: %s\n", nome1);
    printf("Salario 1: %.2lf\n", salario1);
    printf("Nome 2: %s\n", nome2);
    printf("Salario 2: %.2lf\n", salario2);
    printf("Idade: %d\n", idade);
    printf("Sexo: %c\n", sexo);

    return 0;
}

