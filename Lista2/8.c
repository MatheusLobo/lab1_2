//8. Fa�a um programa para ler um numero inteiro, 
//positivo de tr�s d�gitos, e gerar outro numero formado
// pelos d�gitos invertidos do numero lido.

#include<stdio.h>
#include<stdlib.h>

void entr(int n){
     int entrada;
      n = entrada%10 * 100;
      entrada =  entrada/10;
      n = n + entrada%10 * 10;
      entrada =  entrada/10;
      n = n + entrada;
}
int main()
{       system("cls");
      int entrada, n;

      printf("Digire o numero de entrada\n\n\t---> ");
      scanf("%d", &entrada);
      entr(n);

      printf ("\n\n\nA -> %d\n\n\n\n", n);
      system("pause");
}
