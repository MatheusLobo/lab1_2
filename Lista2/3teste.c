//3. Efetuar a leitura de trés valores e apresentar como resultado
//final a soma dos quadrados dos três valores lidos
#include<stdio.h>
#include<stdlib.h>
int leitura(){
    int num1,num2,num3,result,soma;
     printf("\nDigite o valor do N1,N2 e N3\n");
     scanf("\n%d\n", &num1);
     scanf("\n%d\n", &num2);
     scanf("%d", &num3);
    soma=(num1*num1)+(num2*num2)+(num3*num3);
    printf("\nA soma dos quadrados dos tres numeros sao %d\n", soma);
    return 0;
}
int main(){
    
    int result;
    result=leitura();
    
system("pause");
    return 0;
}
