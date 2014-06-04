#include <stdio.h>
#include <stdbool.h>
int steps;
int inversodeN(int N)
{
    int result = 0;
    while(N>0)
    {
        result *=10;
        result += N%10;
        N/=10;
    }
    return result;
}
int casasDecimais(int valor)
{
    int decimais = 0;
    for(;valor>0;valor/=10,decimais++);
    return decimais;
}

bool ePalindromo(int valor)
{
    printf("\n----------------------------------------------");
    printf("\nverificando casas do valor [%d]...\n",valor);
    int i=0;
    int decimais =casasDecimais(valor);
    int casas[decimais];
    for(;valor>0;i++,decimais--,casas[decimais] = valor % 10,valor/=10);
    for(;i>decimais;i--,decimais++ )
    {
        printf("casa decimal n'%d' em relacao a casa n'%d'\n",decimais+1,i+1);
        printf("[elemento] '%d' em relacao [elemento] '%d'\n",casas[decimais],casas[i-1]);
        if(casas[i-1] != casas[decimais])
        {
            printf("o elemento da casa decimal numero %d difere do elemento da casa %d\n",i+1,decimais+1);
            return false;
        }else
        {
            printf("o elemento da casa decimal numero %d eh igual do elemento da casa %d\n",i+1,decimais+1);
        }
        printf("\n");
    }
    return true;
}
int maiorPalindromoPossivel(int palindromo)
{
    for(;!ePalindromo(palindromo);palindromo-- ,steps++);
    return palindromo;
}
int main()
{
    int a,b,palindromo;
    printf("Insira dois numeros de 3 digitos e o programa gerara \no o maior palindromo possivel do produto deles.\n");
    printf("Insira o valor :");
    scanf("%d",&a);
    printf("Insira o valor :");
    scanf("%d",&b);
    palindromo = maiorPalindromoPossivel(a*b);
    printf("O maior palindromo possivel do produto de %d por %d e : %d\n",a,b,palindromo);
    printf("foram necessarias '%d' interacoes para encontrar esse valor.",steps);
}
