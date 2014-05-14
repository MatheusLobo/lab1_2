/*
6. Uma empresa contrata um encanador a
*  R$ 30,00 por dia. Crie um programa que
*  solicite o numero de dias trabalhados pelo encanador 
* e imprima a quantia liquida que devera ser paga, sabendo-se
*  que são descontados 8% para imposto de renda. 
 */

#include<stdio.h>
#include<stdlib.h>

void empresa(float dias){
	dias=(30*dias)-(30*dias)*0.08;
	printf("\n O Salario sera %f\n", dias);
}

int main(){ 
	float dias;
	printf("\nDigite o numero de dias trabalhados\n");
	scanf("%f", &dias);
	empresa(dias);
	return 0;
}

