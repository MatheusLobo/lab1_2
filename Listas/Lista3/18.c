#include <stdio.h>
#include <stdbool.h>


bool divisivelEntreMinMax(int min,int max,int N)
{
    int contadordivisor;
    for(contadordivisor = min;N%contadordivisor == 0&&contadordivisor<max;contadordivisor++);
    return contadordivisor == max ? true : false;
}
int gerarN(int divmin,int divmax)
{
    int N;
    for(N = divmax+1; !divisivelEntreMinMax(divmin,divmax,N);N++);
    return N;
}
int main()
{
    int divmin,divmax;
    printf("Esse programa gera o menor numero que pode ser dividido de um min a um max.\n");
    printf("Insira o valor divisor minimo: ");
    scanf("%d",&divmin);
    printf("Insira o valor divisor maximo: ");
    scanf("%d",&divmax);
    printf("%d",gerarN(divmin,divmax));
}
