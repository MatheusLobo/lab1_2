//Escreva um programa que leia um caracter digitado pelo usuário,
//imprima o caracter digitado e o código ASCII correspondente a este caracter.
#include <stdio.h>
int main()
{
    char ch;
    printf("\nDigite um caracter: ");
    scanf("%c",&ch);
    printf("\nCaracter digitado: %c, Codigo ASCII: %d", ch, ch);
    return 0;
}
