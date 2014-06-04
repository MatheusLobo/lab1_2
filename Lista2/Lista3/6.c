#include <stdio.h>
#define PARES 50
void Npares(int N)
{
    int contador = 0;

    for(contador = 0; contador<=N*2; contador+=2)
    {
        printf("%d ",contador);
        if(contador%5==0&&contador !=0)
        {
            printf("\n");
        }
    }
}
int main()
{
    printf("mostra os %d primeiros pares!,veja a seguir.\n",PARES);
    Npares(PARES);
}
