#include <stdio.h>
//multiplos de N
void multiplosdeN(int N,int nMultilplos)
{
    int contador;
    printf("Os multiplos de %d :\n",nMultilplos);
    for(contador = 1; contador<=nMultilplos;contador++)
    {
        printf("%d = %d * %d \n",(N*contador),N,contador);
    }
}
int main()
{
    int multiplo,N;
    printf("N multiplos de um valor inserido por vc.\n");
    printf("Insira o valor : ");
    scanf("%d",&N);
    printf("Insira quantos multiplos desse valor queres :");
    scanf("%d",&multiplo);
    multiplosdeN(N,multiplo);
}

