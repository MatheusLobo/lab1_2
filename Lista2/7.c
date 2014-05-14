/*
7. Sejam a e b os catetos de um
*  triangulo,faça um programa que entre com 
* os valores de a e b, e ache o valor da hipotenusa 
* e imprima o resultado.  
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void hipotenusa(float h){
	h=sqrt(a*a+b*b)
}	

int main()
{
	float a,b,h;
	printf("\nDigite o valor de a\n");
	scanf("%f", &a);
	printf("\nDigite o valor de b\n");
	scanf("%f", &b);
	h= hipotenusa (h);
	printf("A hipotenusa é %f",h);
	system("pause");
	
	return 0;
}

