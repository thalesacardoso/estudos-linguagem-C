#include <stdio.h>
#include <stdlib.h>

/*
Problema "media_idades"
Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".
*/

int main()
{
    int idade, soma, quantidade;
    double media;

    soma = 0;
    quantidade = 0;

    printf("Digite as idades: \n");
    scanf("%d", &idade);

    if( idade < 0 ){
        printf("IMPOSSIVEL CALCULAR");

    } else {

        do {
            soma = soma + idade;
            quantidade++;
            scanf("%d", &idade);
        } while ( idade > 0);

        media = (double) soma / quantidade;
        printf("MEDIA = %.2lf", media);
    }


    return 0;
}
