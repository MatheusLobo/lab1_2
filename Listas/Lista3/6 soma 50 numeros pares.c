#include <stdio.h>
int main()
{
int i;
int soma=0;
for(i=1;i<=50;i++)
{ if (i%2==0)
{ soma = soma + i;
}
}
printf("Soma dos numeros pares entre 1 a 50: %d\n",soma);
return 0;
} 
