//Fa�a um Programa que pe�a a temperatura em graus Celsius, transforme e mostre em graus Farenheit.
# include <stdio.h>
int main(){
 float CX,TX,FX;
 printf("Digite a temperatura em graus celsius");
 scanf("%f", CX);
 FX =(CX*1.8000) + 32.00;
 printf("A temperatura em graus Farenheit � = %f", FX);
 scanf("%f", CX);
 return 0;
}
