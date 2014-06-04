#include <stdio.h>
int main()
{
    int N;
    printf("recebe um numero maior que 1 e diz se ele e primo ou nao.");
    printf("Insira o valor: ");
    scanf("%d",&N);
    ePrimo(N);

}
void ePrimo(int N)
{
    int contador;
    for(contador = 2; contador<(N/2);contador++)
    {
        if(N%contador == 0)
        {
            printf("%d n e um numero primo",N);
            return;
        }
    }
    printf("%d e um numero primo",N);
}
