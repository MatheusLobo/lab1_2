// comparando 2 strings
#include <stdio.h>
#include <string.h>

int main()
  {
    char string1[20],string2[20];
    int retorno;

    printf("\n");
    printf("Comparando duas strings\n");
    printf("Entre com a primeira string :");
    scanf("%s",&string1);
    printf("Entre com a segunda string :");
    scanf("%s",&string2);
    retorno = strcmp(string1,string2);
    if(retorno == 0)
      printf("As strings são iguais.\n");
    else if(retorno < 0)
      printf("A string1 , maior.\n");
    else
      printf("A string2 , maior.\n");

    return(0); 
  }
