//Fa�a um Programa que leia o tamanho de um lado do quadrado 
//e calcule sua �rea, em seguida mostre o dobro desta �rea para o usu�rio
# include <stdio.h>
int main()
    {
          int quadrado,area,dobro,lado;
          printf("Digite o tamanho do lado do quadrado = ");
          scanf("%d", &lado);
          area=lado*lado;
          dobro=(2*area);
          printf("O dobro da area do quadrado � %d", lado);
          printf("A area do quadrado � %d", area);
          scanf("%d", &lado);
          return 0;  
          }
