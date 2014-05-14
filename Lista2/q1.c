//1. Efetuar a leitura de um numero real e apresentar o resultado do quadrado desse numero.
#include<stdio.h>
#include<stdlib.h>
float calc( float num1 ) { 
return num1 * num1; 
} 
int main(){ 
float n; 
float result; 

printf("\nDigite um numero: "); 
scanf("%f", &n); 

result = calc(n); 

printf("O Quadrado de %6.2f eh: %6.2f", n, result); 
system("pause");
return 0; 
}
