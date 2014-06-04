#include <stdio.h>
int main()
{
    int contador;
    for(contador = 1; contador<=100;contador++)
    {
        if(contador%5 == 0)
        {
            printf("\n");
        }
        printf("%d ",contador);
    }
    contador = 1;
    while(contador<=100)
    { if(contador%5 == 0)
        {
            printf("\n");
        }
        printf("%d ",contador);
        contador++;
    }
    contador = 1;
    do
    {
         if(contador%5 == 0)
        {
            printf("\n");
        }
        printf("%d ",contador);
        contador++;
    }while(contador <=100);
}
