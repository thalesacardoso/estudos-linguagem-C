// O comando include serve para incluir bibliotecas de funções
// <stdio.h>  Funções de entrada e saída de dados
// <string.h>  Funções de string

#include <stdio.h>
#include <string.h>

int main()
{
    int x, y;

    x = 10;
    y = 20;

    // Mostra o valor dentro da variável com quebra de linha "\n"
    printf("%d\n", x);
    printf("%d\n", y);

    // Cria a variável com valor decimal
    double valor = 20.3568;

    // Mostra o valor decimal com formatação de 2 casas após a % ".2"
    printf("%.2lf\n", valor);

    /**
    =============================================================
    **/

    int idade;
    double salario;
    char nome[50];
    char sexo;

    idade = 30;
    salario = 4500.9;
    strcpy(nome, "Maria Lopes");
    sexo = 'F';

    // As variáveis precisam estar na mesma ordem que os placeholds para funcionar
    printf(" A funcionaria %s, sexo %c, ganha R$%.2lf e tem %d anos", nome, sexo, salario, idade);

    return 0;
}

