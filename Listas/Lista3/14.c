#include <stdio.h>
int main()
{
    int interacoes = 0;
    printf("Neste programa tu inseres o numero de somatorio de N que desejas fazer.\n");
    printf("Insira o numero de interacoes : ");
    scanf("%d",&interacoes);
    printf("%d",SomatorioN(interacoes));
}
int SomatorioN(int interacoes)
{
    int resultado = 0;
    int contador,soma;
    for(contador = 0; contador < interacoes; contador++)
    {
        printf("Insira o valor numero %d de %d :",contador+1,interacoes);
        scanf("%d",&soma);
        resultado += soma;
    }
    return resultado;
}
