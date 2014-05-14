/*
7. Sejam a e b os catetos de um
*  triangulo,faça um programa que entre com 
* os valores de a e b, e ache o valor da hipotenusa 
* e imprima o resultado.  
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>//Para as funções sqrt e pow
float calc_hipo(float c1, float c2);
int main(){
float hipotenusa, cat1, cat2;
printf("Digite os valores dos catetos: ");
scanf("%f%f", &cat1, &cat2);
hipotenusa = calc_hipo(cat1, cat2);
printf("\n\nO valor da hipotenusa e %.1f\n\n", hipotenusa);
system("pause");
return 0;
}
float calc_hipo(float c1, float c2){
float hipo;
hipo = sqrt(pow(c1,2)+pow(c2,2));
return(hipo);
}
