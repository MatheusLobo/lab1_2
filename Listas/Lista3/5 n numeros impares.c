#include <stdio.h>
int main()
{
  // Numero de N primeiros numeros naturais impares

    int N;
    int cont = 0;
    printf("Digite um numero N\n");
    printf("Insira o valor: ");
    scanf("%d",&N);
    for(cont = 1; cont<=N; cont+=2)
    {
        printf("%d ",cont);
    }
    return 0;
}
