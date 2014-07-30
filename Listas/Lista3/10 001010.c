#include<stdio.h>
int cInString(char c,char Cstring[],int quantidade)
{
    int contagem;
    int aparicoes = 0;
    for (contagem =0;contagem<=quantidade;contagem++)
    {
        if(c == Cstring[contagem])
        {
            aparicoes +=1;
        }
    }
    return aparicoes;
}
int main()
{
    char palavra[] = "001010";
    char letra = '1';
    int aparicoes = cInString(letra,palavra,6);
    printf("a palavra '%s' tem %d aparicoes do caractere '%c'",palavra,aparicoes,letra);
}
