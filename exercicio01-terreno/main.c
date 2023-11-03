#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    /*
    Problema "terreno"
    Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
    casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
    o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
    duas casas decimais, conforme exemplo.
    */

    double largura, comprimento, area, preco , valor;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    fseek(stdin,0,SEEK_END);
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    fseek(stdin,0,SEEK_END);
    scanf("%lf", &valor);

    area = largura * comprimento;
    preco = area * valor;

    printf("Area do terreno = %.2lf \n", area);
    printf("Preco do terreno = %.2lf \n", preco);

    return 0;
}
