//3. Efetuar a leitura de trés valores e apresentar como resultado
//final a soma dos quadrados dos três valores lidos
#include<stdio.h>
#include<stdlib.h>
int leitura(int soma){
    int num1,num2,num3;
    soma=(num1*num1)+(num2*num2)+(num3*num3);
    return soma;
}
 int main(){
     int num1,num2,num3, result,soma;
     printf("\nDigite o valor do N1,N2 e N3\n");
     scanf("\n%d\n", &num1);
     scanf("\n%d\n", &num2);
     scanf("\n%d\n", &num3);
     result= leitura(soma);
     printf("\nA soma dos quadrados dos tres numeros sao\n %d", result);
     return 0;
     }
