#include <stdio.h>
int main()
{
    int N;
    printf("sequencia de fibonacci ate um valor N\n");
    printf("Insira o valor N : ");
    scanf("%d",&N);
    fibonaccitoN(N);
}
void fibonaccitoN(int N)
{
    int a,b,aux;
    a=0;
    b=1;
    printf("%d ",a);
    while(a<=N)
    {
        aux = a+b;
        a = b;
        b = aux;
        printf("%d ",a);
    }
    //agora o programa escreve na tela até o número sucessor ao que  foi selecionado n
}
