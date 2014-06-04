#include <stdio.h>
float readAndWriteFloat(char palavra[] )
{
    printf(palavra);
    float myValue;
    scanf("%f",&myValue);
    return myValue;
}
int main()
{
    float leitura,maior,menor;
    printf("Esse programa le variados numeros e te diz no fim o maior\n e o menor numero digitado por ti ate o momento\n");
    while(leitura>=0)
    {
        leitura = readAndWriteFloat("Insira o valor :");
        if(leitura > maior)
        { maior =leitura  ;
  } if(leitura <menor){
       menor = leitura;
 }

    }
    printf("o menor valor digitado foi : %.1f\n",menor);
    printf("o maior valor digitado foi : %.1f",maior);
}

