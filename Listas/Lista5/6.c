#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes(float a, float b, float c, 
	   float *x1, float *x2) {

  float delta;

  delta = b*b - 4*a*c;

  if ( delta < 0 ) {
    return(0);
  }

  if ( delta == 0 ) {
    *x1 = -b / (2*a);
    *x2 = *x1;
    return(1);
  }

  *x1 = (-b + sqrt(delta)) / (2*a);
  *x2 = (-b - sqrt(delta)) / (2*a);
  return(2);
}

int main() {

  float a,b,c,r1,r2;
  int nr;

  printf("Digite a, b e c\n");
  scanf("%f %f %f", &a, &b, &c);
  
  while ( a == 0 ) {
    printf("A deve ser diferente de 0. Digite outro valor\n");
    scanf("%f", &a);
  }

  nr = raizes(a,b,c,&r1,&r2);

  if ( nr == 0 ) {
    printf("Solucao inexistente nos numeros reais.\n");
  }
  else {
    if ( nr == 1 ) {
      printf("Ha apenas uma raiz real: %f\n", r1);
    }  
    else {
      printf("As raizes reais sao: %f e %f\n", r1, r2);
    }
  }

  return(0);
}
