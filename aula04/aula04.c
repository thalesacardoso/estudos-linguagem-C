
// O comando include serve para incluir bibliotecas de funções
// <stdio.h>  Funções de entrada e saída de dados
// <string.h>  Funções de string

#include <stdio.h>
#include <string.h>

int main()
{

    int x, y;

    x = 5;
    y = 10;

    printf("%d\n", x);
    printf("%d\n", y);
    printf("*******************\n");

    /******************************************/

    int a;
    double b;

    a = 5;
    b = 2 * a;

    printf("%d\n", a);
    printf("%.2lf\n", b);
    printf("*******************\n");

    /******************************************/

    double b1, b2, h, area;
    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;

    area = (b1 + b2) / 2.0 * h;

    printf("%.2lf\n", area);
    printf("*******************\n");

    /******************************************/

    int valor = 7 ;
    int quantidade = 2;

    // O casting (double) converte o resultado para o tipo real
    double resultado = (double) valor / quantidade;

    printf("%.2lf\n", resultado);
    printf("*******************\n");

    /******************************************/

    double xx;
    int zz;

    xx = 5.0;
    zz = (int) xx; // Converte o valor no tipo inteiro

    printf("%d\n", zz);

    return 0;
}

