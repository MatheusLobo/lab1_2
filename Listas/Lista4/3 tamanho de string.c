// tamanho de um string
#include <stdio.h>
#include <string.h>

int main()
  {
    char string[30];

    printf("\n");
    printf("Determinando o tamanho de uma string\n");
    printf("\n");
    printf("Digite a string :");
    scanf("%s",&string);
    printf("\n");
    printf("A string tem %d carateres.\n",strlen(string));
    return(0);
  }
