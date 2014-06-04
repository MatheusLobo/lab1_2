#include <stdio.h>
void imparesAteN(int N)
{
    int contador = 0;
    for(contador = 1; contador<=N; contador+=2)
    {
        printf("%d ",contador);
    }
}

int main()
{
    int N;
    printf("N numeros impares de um valor inserido por vc\n");
    printf("Insira o valor: ");
    scanf("%d",&N);
    imparesAteN(N);
}
