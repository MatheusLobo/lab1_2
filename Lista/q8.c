//Faça um Programa que peça as 4 notas bimestrais e mostre a média.
#include<stdio.h>
int main ()
{   
    int nota1,nota2,nota3,nota4,soma,media;
    printf("Digite a nota 1 = ");
    scanf("%d", &nota1);
    printf("Digite a nota 2 = ");
    scanf("%d", &nota3);
    printf("Digite a nota 3 = ");
    scanf("%d", &nota3);
    printf("Digite a nota 4 = ");
    scanf("%d", &nota4);
    soma=(nota1+nota2+nota3+nota4);
    media=(soma/4);
    printf("A media da notas é %d", media);
    scanf("%d",&nota4);
    return 0;
    
}
