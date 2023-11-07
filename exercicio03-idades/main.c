#include <stdio.h>
#include <stdlib.h>

/*
Problema "idades"
Fazer um programa para ler o nome e idade de duas pessoas.
Ao final mostrar uma mensagem com os nomes e a idade média entre essas pessoas,
com uma casa decimal, conforme exemplo.
*/

int main()
{

    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("Dados da primeira pessoa: ");
    printf("\nNome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%d",&idade1);

    printf("\nDados da segunda pessoa: ");
    printf("\nNome: ");
    fseek(stdin,0,SEEK_END);
    gets(nome2);
    printf("Idade: ");
    scanf("%d",&idade2);

    media = (double)(idade1 + idade2) / 2;

    printf("\nA idade media de %s e %s eh de %.1lf anos", nome1, nome2,media);


    return 0;
}
