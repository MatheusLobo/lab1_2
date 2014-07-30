#include <stdio.h>
int main()
{
  int a, b, auxiliar, i, n;
  // Aqui foi necessário atribuir valores as variáveis a e b.
  a = 0;
  b = 1;
  printf("Digite um número: ");
  scanf("%d", &n);
  printf("Série de Fibonacci:\n");
  printf("%d\n", b);
  // Com a estrutura de controle for() gero a sequência.
  for(i = 0; i < n; i++)// +1
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
    printf("%d\n", auxiliar);
  }
  return 0;
}
