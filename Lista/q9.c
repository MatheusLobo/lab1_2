//Fa�a um Programa que converta metros para cent�metros.
#include<stdio.h>
int main()
{
    float metros,cent,conv;
    printf("Digite o numero em metros para converter em centimetros = ");
    scanf("%f", &metros);
    conv=metros*100;
    printf("A conversao ficou %f", conv);
    scanf("%f", &metros);
    return 0;
}
