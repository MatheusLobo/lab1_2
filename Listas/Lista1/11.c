//Faça um Programa que leia o tamanho de um lado do quadrado 
//e calcule sua área, em seguida mostre o dobro desta área para o usuário
# include <stdio.h>
int main()
    {
          int quadrado,area,dobro,lado;
          printf("Digite o tamanho do lado do quadrado = ");
          scanf("%d", &lado);
          area=lado*lado;
          dobro=(2*area);
          printf("O dobro da area do quadrado é %d", lado);
          printf("A area do quadrado é %d", area);
          scanf("%d", &lado);
          return 0;  
          }
