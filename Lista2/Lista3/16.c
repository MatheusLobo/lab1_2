#include <stdio.h>
void fibonaccitoN(int N)
{
    int a,b,aux;
    a=0;
    b=1;
    printf("%d ",a);
    while(b<N)
    {
        aux = a+b;
        a = b;
        b = aux;
        printf("%d ",a);
    }
}
int main()
{
    int N = 4000000;
    printf("equencia de fibonacci ate o valor 4000000\n");
    printf("Insira o valor N : ");
    fibonaccitoN(N);
}


