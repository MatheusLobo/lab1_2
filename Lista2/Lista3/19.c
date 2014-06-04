#include <stdio.h>
#include <stdbool.h>
#define tamanhoVetor 10
void lerValoresArray(int valores[],int quantidade)
{
    int i;
    for(i = 0; i<quantidade;i++)
    {
    printf("Insira o valor :");
    scanf("%d",&valores[i]);
    }
}
void maiorValorArray(int valores[],int quantidade)
{
    int i;
    int valorFinal = valores[0];
    int posicao = 0;
    for(i = 1; i <quantidade;i++)
    {
        if(valorFinal < valores[i])
        {
            valorFinal =valores[i];
            posicao = i;
        }
    }
    printf("O maior valor do vetor eh '%d' e sua posicao eh '%d'",valorFinal,posicao);
}int main()
{
    int valores[tamanhoVetor];
    printf("insira 10 valores no vetor \ne o programa lhe dira o maior onde ele se encontra.");
    lerValoresArray(valores,tamanhoVetor);
    maiorValorArray(valores,tamanhoVetor);
}

