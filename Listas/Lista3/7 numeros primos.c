#include <stdio.h>
int main() {
  int num, i, cont;
  printf("Digite um numero:");
  scanf("%d", &num);
  i = 2;
  cont = 0;
    while (i < num) {
      if (num % i == 0) {
        cont++;
      }
      i++;
   }
    if (cont > 0) {
      printf("\nO numero digitado nao e primo.");
    }
    else {
      printf("\nO numero digitado e primo.");
    }
    printf("\n\n");
 return 0;
}
