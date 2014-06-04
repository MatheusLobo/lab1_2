#include <stdio.h>

char[] substuirChar(char palavra[],char substituto,char substituido,int quantidade);
int main()
{
    char palavra[] = "1010101011";
    palavra = substuirChar(palavra,'1','0',10);
    printf(palavra);
}
char[] substuirChar(char palavra[],char substituto,char substituido,int quantidade)
{
    int contador = 0;
    while(contador < quantidade)
    {
        if(palavra[contador] == substituido)
        {
            palavra[contador] = substituto;
        }
        contador++;
    }
    return palavra;
}
