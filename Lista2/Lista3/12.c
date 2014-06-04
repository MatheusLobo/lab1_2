#include <stdio.h>
int main()
{
    int N;
    printf("imprime na tela todos os divisores de N\n-N(um numero definido por ti).\n");
    printf("Insira N : ");
    scanf("%d",&N);
    divisoresN(N);
}
void divisoresN(int N)
{
    int contador;
    for(contador = 1; contador <=N;contador++)
    {
        if(N%contador == 0)
        {
            printf("%d eh um divisor de %d \n",contador,N);
        }
    }
}
